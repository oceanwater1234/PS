#include<iostream>
#include<cmath>
using namespace std;
int m;
int res;
bool Palindrom(int n,int res = 0) {
    if(!n) return res == m;
    return Palindrom(n / 10, res * 10 + n % 10);
}
int main() {
    int n;
    m = n;
    cin >> m;
    Palindrom(n) ? cout << "True" : cout << "False";
    return 0;
}