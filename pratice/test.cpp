#include <iostream>
#include <string>

using namespace std;

class FileHandler {
private:
    string fileName;

public:
    // 생성자: 파일을 연다고 가정
    FileHandler(string name) {
        fileName = name;
        cout << fileName << " 파일을 열었습니다. (객체 생성)" << endl;
    }

    // 소멸자: 파일을 닫고 메모리 정리
    ~FileHandler() {
        cout << fileName << " 파일을 안전하게 닫고 메모리를 비웁니다. (객체 소멸)" << endl;
    }

    void write() {
        cout << fileName << "에 데이터를 기록 중..." << endl;
    }
};

int main() {
    cout << "--- main 함수 시작 ---" << endl;

    {
        // 중괄호 안에서 객체 생성 (지역 객체)
        FileHandler myFile("data.txt");
        myFile.write();
        
        // 이 중괄호가 끝나는 순간 myFile 객체는 수명을 다함 -> 소멸자 자동 호출!
    } 

    cout << "--- 중괄호를 벗어남 ---" << endl;

    // 동적 할당의 경우
    FileHandler* dynamicFile = new FileHandler("dynamic.txt");
    delete dynamicFile; // delete를 호출하는 순간 소멸자 호출!

    return 0;
}