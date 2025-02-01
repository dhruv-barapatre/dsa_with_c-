#include <iostream>
using namespace std;

int main()
{
    int unit, unitcharge;
    cout << "Enter Unit : ";
    cin >> unit;
    if (unit > 0 && unit <= 50)
    {
        unitcharge += unit * 1;
    }
    else if (unit > 50 && unit <= 100)
    {
        unitcharge += 50 + ((unit - 50) * 1.5);
    }
    else if (unit > 100 && unit <= 150)
    {
        unitcharge += 125 + ((unit - 100) * 2);
    }
    else if (unit > 150)
    {
        unitcharge += 225 + ((unit - 150) * 3);
    }
    else
    {
        cout << "Invalid Unit";
    }
    if (unit > 0)
    {
        cout << "Your Final Bill Is :  " << endl;
        cout << "Unit = " << unit;
        cout << ", unitPrice = " << unitcharge;
    }

    return 0;
}