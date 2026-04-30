#include<iostream>
using namespace std;
int m;
bool Palindrom(int n,int res = 0) {
    if(!n) return res == m;
    return Palindrom(n / 10, res * 10 + n % 10);
}
int main() {
    cin >> m;
    Palindrom(m) ? cout << "True" : cout << "False";
    return 0;
}