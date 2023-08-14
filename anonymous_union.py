#include <iostream>

struct Student {
    std::string name;
    int rollNumber;

    union {
        int age;
        double gpa;
    };
};

int main() {
    Student student1;
    student1.name = "Alice";
    student1.rollNumber = 101;
    student1.age = 20;

    Student student2;
    student2.name = "Bob";
    student2.rollNumber = 102;
    student2.gpa = 3.75;

    std::cout << "Student 1: " << student1.name << " (Age: " << student1.age << ")" << std::endl;
    std::cout << "Student 2: " << student2.name << " (GPA: " << student2.gpa << ")" << std::endl;

    return 0;
}
