#include <iostream>

using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 1; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = 5; j >= i; j--)
        {
            if (j % 2 == 0)
            {
                cout << "-" << " ";
            }
            else
            {
                cout << "|" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}