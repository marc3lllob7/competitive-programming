class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int bfr2 = 0;
        int bfr1 = 1;
        int actual = 1;

        for(int i = 0; i < n; i++){
            actual = bfr1 + bfr2;
            bfr2 = bfr1;
            bfr1 = actual;
        }

        return actual;
    }
};
