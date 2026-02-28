#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n,m;
    vector<ll> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin() , v.end() , greater<int>());
    
    ll tmp = 0;

    for(int i = 0; i < v.size(); i++) {
        ll noob = v[i] * (i + 1);
        if(tmp < noob) tmp = noob;    
    }

    cout << tmp;
    return 0;
}