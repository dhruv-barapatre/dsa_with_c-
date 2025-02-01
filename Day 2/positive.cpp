#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter Number : ";
    cin >> number;
    if(number < 0){
        cout << "Number is Negative";
    }else if(number >0 ){
        cout << "Number is Positive";
    }else{
        cout << "Number is NEUTRAL";
    }
    return 0;
}