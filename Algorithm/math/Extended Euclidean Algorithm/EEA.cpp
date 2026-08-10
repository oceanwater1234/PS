#include<iostream>
using namespace std;
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
int main(void) {
    int a = 161,b = 28;

    pair<int,int> tmp = EEA(a,b);

    cout << a << "x + " << b << "y = gcd(" << a << "," << b << ") \n"; 
    cout << "x = " << tmp.first << " , y = " << tmp.second; 
    return 0;
}