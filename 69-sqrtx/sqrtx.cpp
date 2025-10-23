class Solution {
public:
    int mySqrt(int x) 
    {
        long m = x;
        while(m*m > x)
        {
            m =(m + x/m)/2;
        }
        return static_cast<int>(m);    
    }
};