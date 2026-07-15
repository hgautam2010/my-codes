class Solution {
public:
    long long gcd(long long a, long long b) {
        if (a > b) swap(a, b);
        if (b % a == 0) return a;
        return gcd(b - a, a);
    }
    int gcdOfOddEvenSums(int n) {
        long long odd, even;

        odd = 1ll * n * n;
        even = 1ll * n * (n + 1);

        return gcd(odd, even);
    }
};
