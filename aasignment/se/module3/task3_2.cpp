#include<iostream>
using namespace std;

class Rectangle {
public:
    int l, b;
    int area() { return l * b; }
};

int main() {
    Rectangle r;
    r.l = 5;
    r.b = 4;
    cout << "Area = " << r.area();
}
//find area in oop
