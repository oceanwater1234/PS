#include<iostream>
#include<cmath>
using namespace std;
void drawCantor(int n,int start,int end) {
    if(n == 1) return ;

}
void mainCator(int n,int current) {
    if(n == 1) return ;

    cout << "step : " << current << "  ";
    drawCantor(n,n / 3 + 1,2 * n / 3);
    cout << "\n";
    mainCator(n / 3,current + 1);
}
int main() {
    int n = pow(3,5); 

    mainCator(n,1);
    return 0;
}