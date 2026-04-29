#include<iostream>
using namespace std;

class Bank {
private:
    int balance = 1000;

public:
    void deposit(int amt){ balance += amt; }
    void show(){ cout << balance; }
};

int main(){
    Bank b;
    b.deposit(500);
    b.show();
}
