#include<iostream>
#include<string>
using namespace std;
string drawStar(int n) {
    if(!n) return "";
    return  "*" + drawStar(n - 1); 
}
void mainStar(int n,int m) { 
    if(n == m + 1) return ;
    cout << drawStar(n) << "\n";

    mainStar(n + 1,m); 
}
int main() {
    mainStar(1,5);
    return 0;
}