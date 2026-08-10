#include<iostream>
using namespace std;
typedef long long ll;
ll fast(ll base,ll power, ll m) {
    ll result = 1;
    base %= m;

    while(power) {
        if(power & 1) 
            result = (base * result) % m;

        base = (base * base) % m;
    }
}
ll inverse(ll a, ll p , ll m) {
    return fast(a,p - 2, m);
}
int main() {
    int a = 3;
    int p = 5;
    int m = 10000007;

    cout 
    return 0;
}