#include<iostream>
using namespace std;
int sumNum(int n) {
    if(!n) return 0;
    return n % 10 + sumNum(n / 10);
}
int main() {
    cout << sumNum(123123);
    return 0;
}