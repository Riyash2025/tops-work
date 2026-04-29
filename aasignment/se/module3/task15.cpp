#include<iostream>
using namespace std;

int main(){
    int arr[5], sum=0;

    for(int i=0;i<5;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum=" << sum;
    cout << "\nAvg=" << sum/5;
}
//array string example
