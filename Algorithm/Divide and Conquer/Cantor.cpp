#include <iostream>
#include <string>
using namespace std;
// 1. 선분을 깎아내는 재귀 함수
void drawCantor(string& line, int start, int length, int depth) {
    // 기저 조건: 더 이상 쪼갤 단계가 없거나 길이가 너무 짧으면 종료
    if (depth == 0 || length < 1) return;

    int third = length / 3;

    // 가운데 부분을 공백으로 치환
    // (이 부분도 재귀로 만들 수 있지만, 가독성을 위해 string의 replace/fill 개념 활용)
    for (int i = start + third; i < start + 2 * third; i++) 
        line[i] = ' ';
    

    // 왼쪽 1/3 지점 재귀 호출
    drawCantor(line, start, third, depth - 1);
    
    // 오른쪽 1/3 지점 재귀 호출
    drawCantor(line, start + 2 * third, third, depth - 1);
}

// 2. 단계를 출력하는 재귀 함수 (반복문 대신 사용)
void printLevels(int currentDepth, int maxDepth, int totalLength) {
    if (currentDepth > maxDepth) return;

    string line(totalLength, '-'); // 초기 선분 생성
    drawCantor(line, 0, totalLength, currentDepth);

    cout << "Level " << currentDepth << ": " << line << endl;

    // 다음 단계로 재귀 호출 (반복문 역할을 대신함)
    printLevels(currentDepth + 1, maxDepth, totalLength);
}

int main() {
    int maxDepth = 1;
    int totalLength = 3; // 3^4

    // 반복문 없이 재귀로 시작
    printLevels(0, maxDepth, totalLength);

    return 0;
}