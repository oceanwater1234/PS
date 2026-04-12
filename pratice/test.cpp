#include <iostream>

using namespace std;

bool isPalindrome(int n) {

    int original = n;    
    long reversed = 0;  

    while (n) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }

    return original == reversed;
}
int main() {
    int n;

    cin >> n;
    isPalindrome(n) ? cout << "True" : cout << "False";
    return 0;
}