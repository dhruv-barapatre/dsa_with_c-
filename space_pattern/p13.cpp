#include <iostream>

using namespace std;

int main()
{
	for (char i = 'A'; i <= 'E'; i++)
	{
		for (char k = 'E'; k > i; k--)
		{
			cout << "  ";
		}
		for (char j = i; j >= 'A'; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}

//        A
//      B A
//    C B A
//  D C B A
// E D C B A