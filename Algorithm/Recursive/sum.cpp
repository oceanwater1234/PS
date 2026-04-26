#include<iostream>
#include<cmath>
using namespace std;
int step = 0;
int sum(int n) {
    if(!n) return 0;
    return n + sum(n - 1);
}
int fastSum(int n) {
    cout << "step : " << step++ << " / current n : " << n << endl;
    if(n == 1) return 1;
    else if(n % 2) return 2 * fastSum((n - 1) / 2) + pow((n - 1) / 2 , 2) + n;
    else return 2 * fastSum(n / 2) + pow(n/2,2);  
}
int main(void) {
    int n = 5;

    cout << sum(n) << endl;
    cout << fastSum(n);
    return 0;
}