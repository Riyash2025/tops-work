#include<iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int marks;
};

int main(){
    Student s;
    s.name = "Riya";
    s.marks = 90;

    cout << s.name << " " << s.marks;
}
