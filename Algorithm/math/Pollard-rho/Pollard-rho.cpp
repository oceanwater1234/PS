#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
using BigInt = __int128;
using ull = unsigned long long;
BigInt gcd(BigInt a, BigInt b) {
    if (!b) return a;
    return gcd(b, a % b);
}
//Compute a+b
BigInt addmod(BigInt x, BigInt y, BigInt m) {
    x %= m;
    y %= m;

    if (x + y >= m)
        return (x + y) - m;
    else
        return x + y;
}
//Compute a*b 
BigInt overflow_power(BigInt a, BigInt x, BigInt mod) {
    BigInt res = 0;

    a %= mod;
    x %= mod;

    while (x) {
        if (x & 1)
            res = addmod(res, a, mod);
        a = addmod(a, a, mod);
        x >>= 1;
    }
    return res;
}

//Compute a^b 
BigInt power(BigInt a, BigInt x, BigInt mod) {
    BigInt res = 1;
    a %= mod;
    while (x) {
        if (x & 1)
            res = overflow_power(res, a, mod);
        a = overflow_power(a, a, mod);
        x >>= 1;
    }
    return res;
}


bool miller(BigInt n, BigInt a) {
    if (a % n == 0) return true;

    BigInt k = n - 1;

    while (k % 2 == 0) {
        if (power(a, k, n) == n - 1) return true;
        k /= 2;
    }

    BigInt tmp = power(a, k, n);

    if (tmp == n - 1) return true;
    else if (tmp == 1) return true;
    return false;

}
BigInt polynomial(BigInt x, BigInt c, BigInt mod) {
    return (x * x % mod + c) % mod;
}
bool prime(BigInt n) {
    vector<BigInt> base = { 2, 325, 9375, 28178, 450775, 9780504, 1795265022 };

    for (int i = 0; i < base.size(); i++)
        if (!miller(n, base[i]))
            return false;
    return true;
}
BigInt pollardRho(BigInt n) {
    if (!(n % 2)) return 2;
    if (prime(n)) return n;

    BigInt x = rand() % (n - 2) + 2;
    BigInt y = x;
    BigInt c = rand() % 10 + 1;
    BigInt g = 1;

    while (g == 1) {
        x = polynomial(x, c, n);
        y = polynomial(y, c, n);
        y = polynomial(y, c, n);

        g = gcd(abs(x - y), n);

        if (g == n) return pollardRho(n);
    }

    if (prime(g)) return g;
    return pollardRho(g);
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ull n;
    vector<ull> v;

    cin >> n;
   
    while(n > 1) {
        BigInt t = pollardRho(n);

        v.push_back(t);
        n /= t;
    }
    for(auto i : v) 
        cout << i << " ";
    return 0;
}