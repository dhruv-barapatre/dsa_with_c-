#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;

    if (age >= 18)
    {
        if (age >= 65)
        {
            cout << "You Are Not Elgible";
        }
        else
        {
            cout << "You Are Elgible For Vote";
        }
    }
    else if (age <= 0)
    {
        cout << "Enter Valid Age";
    }
    else
    {
        cout << "You Are Not Elgible For Vote";
    }
    return 0;
}