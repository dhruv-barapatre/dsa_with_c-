#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter Number : ";
    cin >> number;
    if(number <=0){
        cout << "Number is not positive";
    }
    else if (number % 7 == 0)
    {
        cout << "Number is Divided by 7";
    }else{
        cout << "Number is not Divided by 7";
    }
    return 0;
}