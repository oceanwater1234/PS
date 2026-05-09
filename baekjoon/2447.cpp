#include <iostream>
#include <cstring>
#define NUM 2187
using namespace std;
char arr[NUM][NUM] = {'*', };
void drawStar(int x,int y,int n) {
    if(n == 1) return ;

    int divide = n / 3;

    for(int i = y + divide; i < y + divide * 2; i++) {
        for(int j = x + divide; j < x + divide * 2; j++) 
            arr[i][j] = ' ';
    } // 필요한 부분에 대해서만 공백

    // for(int i = y; i < y + n; i++) {
    //     for(int j = x; j < n + x; j++) {
    //         if(
    //             (i >= y + divide && i < y + 2 * divide) &&
    //             (j >= x + divide && j < x + 2 * divide) 
    //         ) 
    //             arr[i][j] = ' ';
    //     }
    // }
  
    for(int i = 0; i < 3; i++) {
         for(int j = 0; j < 3; j++) {
             if(i == 1 && j == 1) continue;
             else drawStar(x + divide * i, y + divide * j,divide);
         }
    }

    //drawStar(x,y,divide);
    //drawStar(x ,y + divide,divide);
    // drawStar(x ,y + 2 * divide,divide);
    // drawStar(x + divide,y,divide);
    // drawStar(x + divide,y + 2 * divide,divide);
    // drawStar(x + 2 * divide,y,divide);
    // drawStar(x + 2 * divide,y + divide,divide);
    // drawStar(x + 2 * divide,y + divide * 2,divide);
}
int main(void) {

    memset(arr,'*',sizeof(arr));

    int n;

    cin >> n;

    drawStar(0,0,n);

   for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << arr[i][j];
        cout << "\n";
    }

    return 0;
}