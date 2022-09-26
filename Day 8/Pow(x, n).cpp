class Solution {
public:
    double myPow(double x, int n) {
        long long m = n;
        
        if (m == 0) return 1;
        
        bool flag = true;
        
        if (m < 0) {
            m *= -1;
            flag = false;
        }
        double carry = 1;
        while (m != 1) { 
            if (m & 1) {
                carry *= x;
                x *= x;
                --m /= 2;
            } else {
                x *= x;
                m /= 2;
            }
        }
        
        if (!flag) return 1 / (carry * x);
        
        return carry * x;
    }
};

/*

so, here what we're doing is
instead of simply multiplying the number by itself n times (O(n)) complexity,
we're dividing the power by two every time it's odd.
Like so -
2 ^ 10 => (2 * 2) ^ 5 => 4 ^ 5
now, n is 5, so we'll take one four out and put it in a variable (by multiplying it to the variable not adding), subtract n by 1, and divide it by 2 now that its even.
4 ^ 5 => (4) * (4 * 4) ^ ((5 - 1) / 2) => (4) * 16 ^ 2
now, this goes on until n is 1.
(4) * (16 * 16) ^ (2 / 2) => (4) * 256 ^ 1
n is now 1, so the loop will stop
in the end, we will multiply the number by carry and return it (if negative power, we return 1 / number * carry)

*/
