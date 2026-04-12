#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void drawCantor(string& line, int start, int length, int depth) {
    if (depth == 0 || length < 1) return ;
    

    int third = length / 3;

    for (int i = start + third; i < start + 2 * third; i++) 
        line[i] = ' ';
    
    drawCantor(line, start, third, depth - 1);
    drawCantor(line, start + 2 * third, third, depth - 1);
}

void printLevels(int currentDepth, int maxDepth, int totalLength) {
    string line(totalLength, '-'); 

    drawCantor(line, 0, totalLength, currentDepth);
    if (currentDepth > maxDepth) {
        cout << line << endl;
        return;
    }

    printLevels(currentDepth + 1, maxDepth, totalLength);
}

int main() {

    int n;

    while(cin >> n) {
        
        int totalLength = pow(3,n);
    
        printLevels(0, n, totalLength);

    }

    return 0;
}