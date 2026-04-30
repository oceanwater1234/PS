#include<iostream>
#define NUM 25
inline void Plus(int a,int b) {
    std::cout << a << " + " << b << " = " << a + b;
}
int main() {
    int b = 20;
    
    Plus(NUM, b);
    return 0;
}