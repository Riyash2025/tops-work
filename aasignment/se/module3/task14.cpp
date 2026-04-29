#include<iostream>
using namespace std;

int x = 10;

void show(){
    int x = 5;
    cout << "Local: " << x << endl;
}

int main(){
    show();
    cout << "Global: " << x;
}
