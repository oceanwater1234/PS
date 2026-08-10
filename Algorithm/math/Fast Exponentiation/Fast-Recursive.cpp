#include<iostream>
typedef long long ll;
using namespace std;
ll fast(ll base,ll power) {
    if(!power) return 1;

    else if(power % 2) return base * fast(base,power - 1);

    ll half = fast(base, power / 2);
    return half * half;
}
int main(void) {
    cout << fast(2,10);
    return 0;
}