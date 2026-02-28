#include<iostream>
int gcd(int a,int b){
    if(!b) return a;
    return gcd(b,a % b);
}
int main(void) {
    int a,b;

    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}