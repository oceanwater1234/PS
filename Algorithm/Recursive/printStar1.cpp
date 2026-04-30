#include<iostream>
using namespace std;
void drawStar(int n,int m){
    if(n == m) return ;

    cout << "*";
    drawStar(n + 1,m);
}
void StarMain(int n,int m) {
    if(n == m + 1) return; 

    drawStar(0,n);
    cout << "\n";

    StarMain(n + 1,m);
}
int main() {
    int m;

    cin >> m;
    StarMain(1,m);
    return 0;
}