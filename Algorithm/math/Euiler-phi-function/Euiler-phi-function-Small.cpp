#include<iostream>
using namespace std;
int Eulier(int n) {
    int res = n;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            res /= i;
            res *= i - 1;

            while(n % i == 0) n /= i;
        }
    }

    if(n != 1) {
        res /= n;
        res *= n - 1;
    }

    return res;
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;

    cin >> n;
    cout << Eulier(n); 
    return 0;
}