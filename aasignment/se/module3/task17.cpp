#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    if(s == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
}
//palidrome expy
