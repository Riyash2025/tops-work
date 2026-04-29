#include<iostream>
using namespace std;

int main() {
    int num = 50, guess;

    while(true) {
        cin >> guess;

        if(guess == num) {
            cout << "Correct!";
            break;
        } else if(guess > num)
            cout << "Too High\n";
        else
            cout << "Too Low\n";
    }
}
//number guessing game
