#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#define NUM 2187
using namespace std;
char arr[NUM][NUM] = {'*', };
void drawStar(int x,int y,int n) {
    if(n == 1) return ;

    for(int i = y; i < n; i++) {
        for(int j = x; j < n; j++) {
            if(
                (i >= n / 3 && i < 2 * n / 3)
            && (j >= n / 3 && j < 2 * n / 3)
            )
                arr[i][j] = ' ';
        }
    }
    
    drawStar(x,y,n/3);
}
int main(void) {

    memset(arr,'*',sizeof(arr));

    int n,tmp,depth = 0;
    int x,y;

    cin >> n;

    //drawStar(0,0,n);
    drawStar(3,0,n);
   
   

   for(int i = 0; i < n; i++) {
     for(int j = 0; j < n; j++)
        cout << arr[i][j];
    cout << "\n";
   }

    return 0;
}