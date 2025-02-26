#include <iostream>

using namespace std;
int main()
{
	int r,c,sum;
	cout << "Enter Your Row : ";cin >> r;
	cout << "Enter Your Columns : ";cin >> c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << "Enter Value of a[" << r << "]["<<c<<"] : ";
			cin >> a[i][j];
			sum+=a[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Avg is :" << sum/(r*c) ;
	return 0;
}

// avg of all elemet of 2d array.
