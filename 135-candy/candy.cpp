class Solution {
public:
    int candy(vector<int>& ratings) {
        int s = static_cast<int>(ratings.size());
        if(s == 0) return 0;
        vector <int> candies(s,1);
        int sum =0;

        for(int i =1; i<s; i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                candies[i]= candies[i-1]+1;
            }
        }
        for(int i = s-2; i>= 0 ; i--)
        {
            if(ratings[i] > ratings[i+1])
            {
                candies[i] = max(candies[i], candies[i+1] +1);
            }
        }
        for(int c: candies) sum+=c;
        return sum;
    }
};