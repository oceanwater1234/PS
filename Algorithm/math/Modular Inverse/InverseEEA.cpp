#include<iostream>
using namespace std;
int gcd(int a,int b) {
    if(!b) return a;
    return gcd(b , a % b);
}
pair<int, int> EEA(int a, int b) {
    if(!b) {
        return {1,0};
    }

    pair<int,int> tmp = EEA(b,a % b);
    int xn = tmp.first;
    int yn = tmp.second;

    int p = a/b;

    int x = yn;
    int y = xn - p * yn;

    return {x,y};
}
int modInverse(int a,int m) {
    if(gcd(a,m)) return -1;
    int tmp = EEA(a,m).first;

    return (tmp % m + m) % m;
}
int main() {
    cout <<  modInverse(11,3);
    return 0;
}