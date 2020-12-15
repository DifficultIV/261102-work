#include<iostream>
using namespace std;

int main(){
    int n;
    int odd=0;
    int even=0;
    cout << "Enter an integer: ";
    cin >> n;
    while(n != 0){
if(n % 2 == 0){
    even ++;
}
else{
    odd ++;
}
    cout << "Enter an integer: ";
    cin >> n;
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;}
