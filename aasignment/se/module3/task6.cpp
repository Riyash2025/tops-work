#include<iostream>
using namespace std;

int main() {
    int a = 5;
    float b = a;   // implicit

    float x = 5.8;
    int y = (int)x;  // explicit

    cout << b << endl;
    cout << y;
}
