#include <iostream>

using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 5; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }

    return 0;
}