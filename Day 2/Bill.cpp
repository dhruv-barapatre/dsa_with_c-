#include <iostream>
using namespace std;
int main()
{
    int bill, discount;
    cout << "Enter Your Bill : ";
    cin >> bill;
    if (bill > 0 && bill <= 1000)
    {
        discount = (bill * 5) / 100;
    }
    else if (bill > 1000 && bill <= 2000)
    {
        discount = (bill * 10) / 100;
    }
    else if (bill > 2000 && bill <= 5000)
    {
        discount = (bill * 15) / 100;
    }
    else if (bill > 5000 && bill <= 10000)
    {
        discount = (bill * 20) / 100;
    }
    else if (bill > 10000)
    {
        discount = (bill * 25) / 100;
    }
    else
    {
        cout << "Enter Valud Amount";
    }
    if (bill > 0){
        int finalBill=bill-discount;
        cout << "Youre Final Bill Is : " << finalBill;
    }
        return 0;
}
