class Solution {
public:
    int reverse(int x) {
        
       long revNum = 0;
        long num = x;          
        bool neg = num < 0;
        if (neg) num = -num;

        while (num > 0) {
            revNum = revNum * 10 + num % 10;
            num /= 10;
        }

        if (neg) revNum = -revNum;

        if (revNum < INT_MIN || revNum > INT_MAX) return 0;
        return (int)revNum;
    }
};