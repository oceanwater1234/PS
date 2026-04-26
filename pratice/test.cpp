#include<iostream>
#include<cmath>
#include<iomanip>
#include<ctime>
#include"te.h"
using namespace std;
int main() {
   int n,sum = 0;
   double average = 0.0;
   cout << setw(5) << 1;
   
   srand(static_cast<int>(time(0)));
   int p = rand() % 11;
   while(p != 10) {
      p = rand() % 11;
      cout << p << endl;
   }d
   
   return 0;
}