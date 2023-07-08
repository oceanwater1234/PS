#include<iostream> 
#include<vector> 
using namespace std;
typedef unsigned long long ull;
//Compute a+b
ull addmod(ull x, ull y, ull m) {
    x %= m;
    y %= m;

    if(x + y >= m)
        return (x + y) - m;
    else 
        return x + y;
}
//Compute a*b 
ull overflow_power(ull a,ull x,ull mod) {
    ull res = 0;

    a %= mod;
    x %= mod;

    while(x) {
        if(x & 1)
            res = addmod(res,a,mod);
        a = addmod(a,a,mod);
        x>>=1; 
    }
    return res;
}

//Compute a^b 
ull power(ull a,ull x,ull mod) {
    ull res = 1;
    a %= mod;
    while(x) {
        if(x & 1) 
            res = overflow_power(res,a,mod);
        a = overflow_power(a,a,mod);
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
    vector<ull> base = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};

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