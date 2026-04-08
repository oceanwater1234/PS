#include <iostream>
#include <cmath>
using namespace std;
void drawCantor(int index, int n) {
    if (n == 1) {
        cout << "-";
        return;
    }

    int segment = n / 3; // 3등분한 한 구역의 길이

    if (index < segment) drawCantor(index, segment);

    else if (index >= segment && index < segment * 2) cout << " ";
    else drawCantor(index - segment * 2, segment);
}
int main() {
    int N;
    cout << "N을 입력하세요: ";
    while (cin >> N) {
        int totalLength = pow(3, N);

        // 한 칸씩 이동하며 해당 칸에 무엇을 찍을지 재귀로 결정
        for (int i = 0; i < totalLength; i++) {
            drawCantor(i, totalLength);
        }
        cout << "\n\n"; // 가독성을 위해 줄바꿈
        cout << "N을 입력하세요 (종료하려면 Ctrl+Z): ";
    }

    return 0;
}