#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void drawCantor(string& line,int n,int start,int total) {
    if(n == 1 || !total) return ;
    int next = n / 3;
  
    for(int i = start + next; i < 2 * next + start; i++)
        line[i] = ' ';

    drawCantor(line,next,start,total - 1);
    drawCantor(line,next,next * 2 + start , total - 1);
}
void mainCantor(int n,int total,int depth) {
    if(!n) return ;
    
    string line(total,'-');
    drawCantor(line,n,0,depth);
    cout << line << endl;
    mainCantor(n / 3,total,depth - 1);
}
int main() {
    int depth = 3;
    int n = pow(3,depth);

    mainCantor(n,n,depth);
    // int mAx = n;

    // for(int i = 0; i <= depth; i++)  {
    //     string line(mAx,'-');

    //     drawCantor(line, n, 0,i);
    //     cout << line << "\n";
    // }
    return 0;
}