class Solution {
public:
    double power(double x, unsigned int y)
    {
        double temp;
        if( y == 0)
            return 1;
        temp = power(x, y / 2);
        if (y % 2 == 0)
            return temp * temp;
        else
            return x * temp * temp;
    }
    double myPow(double x, int n) {
        int p = abs(n);
        double ans = power(x, p);
        if(n > 0)
            return ans;
        return 1.00000 / ans;
    }
};