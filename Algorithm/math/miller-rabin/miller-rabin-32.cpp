#include<iostream> 
#include<vector> 
using namespace std;
typedef unsigned long long ull;
ull power(ull a,ull x,ull mod) {
    ull res = 1;

    while(x) {
        if(x & 1) 
            res = ((res % mod) * (a % mod)) % mod;
        a = ((a % mod) * (a % mod)) % mod;
        x>>=1; 
    }
    return res;
}


bool miller(ull n,ull a) {
    if(a % n == 0) return true;

    ull k = n - 1;
    
    while(k % 2 == 0) {
        if(power(a,k,n) == n - 1) return true;
        k /= 2;
    }

    ull tmp = power(a,k,n);

    if(tmp == n - 1) return true;
    else if(tmp == 1) return true;
    return false;

}
bool prime(ull n) {
    vector<ull> base = {2, 7, 61};

    for(int i = 0; i < base.size(); i++)
        if(!miller(n,base[i]))
            return false;
    return true;    
}
int main(){
    ull n;

    cin >> n;
   
    prime(n) ? cout << "prime" : cout << "not prime";
    return 0;
}