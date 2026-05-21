#include<string>
class Student{
public:
    Student(std::string name,int score) : name{name} , score{score} {
        studentCnt++;
    }
private:
    std::string name;
    int score;
    static int studentCnt;
};