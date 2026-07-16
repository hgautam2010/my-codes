class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0, sum = 0;
        int digits = 0;

        while (n) {
            if (n % 10 != 0) {
                num += 1ll * pow(1ll * 10, 1ll * digits) * (n % 10);
                sum += (n % 10);
                digits++;
            }
            n /= 10;
        }

        return num * sum;
    }
};
