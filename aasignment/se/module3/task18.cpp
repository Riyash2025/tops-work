#include<iostream>
using namespace std;

class Calc {
public:
    int add(int a,int b){ return a+b; }
};

int main(){
    Calc c;
    cout << c.add(2,3);
}
//addition calc
		
