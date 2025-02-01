#include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout << "Enter Number Percentage : ";
    cin >> percentage;
    if (percentage >= 90 && percentage <= 100)
    {
        cout << "Grade Is A+";
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "Grade Is A";
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "Grade Is B+";
    }
    else if (percentage >= 60 && percentage < 70)
    {
        cout << "Grade Is B";
    }
    else if (percentage >= 50 && percentage < 60)
    {
        cout << "Grade Is C+";
    }
    else if (percentage >= 40 && percentage < 50)
    {
        cout << "Grade Is C";
    }
    else if (percentage >= 34 && percentage < 40)
    {
        cout << "Grade Is D";	
    }
    else if (0 < percentage && percentage < 34)
    {
        cout << "You are Fail !!!!!!";
    }
    else
    {
        cout << "Enter Valid Percentage";
    }
    return 0;
}