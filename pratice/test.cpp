#include <iostream>
#include <vector>

using namespace std;

// 계산된 값을 저장할 메모리 공간 (배열 또는 벡터)
// -1은 아직 계산되지 않았음을 의미합니다.
long long memo[101];

long long fibonacci(int n) {
    // 1. 기저 사례 (Base Case)
    if (n <= 1) return n;

    // 2. 이미 계산한 적이 있다면 저장된 값을 즉시 반환 (Memoization)
    if (memo[n] != -1) {
        return memo[n];
    }

    // 3. 계산되지 않은 값은 재귀적으로 구한 뒤 메모에 저장
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    
    return memo[n];
}

int main() {
    int n;
    cout << "피보나치 수를 구할 항 번호를 입력하세요 (최대 100): ";
    cin >> n;

    // 메모이제이션 배열 초기화
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    cout << n << "번째 피보나치 수: " << fibonacci(n) << endl;

    return 0;
}