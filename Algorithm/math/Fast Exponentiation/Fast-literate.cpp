#include<iostream>
using namespace std;
typedef long long ll;
ll fast(ll base,ll power,ll m) {
    ll res = 1;
    base %= m;

    while(power) {
        if(power & 1) 
            res = (res * base) % m;
        
        base = (base * base) % m;
        power >>= 1;
    }

    return res;
}
int main(void) {

    cout << fast(3,6,10000007);
    return 0;
}