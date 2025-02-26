// diagonal, anti diagonal element sum
#include <iostream>

using namespace std;
int main()
{
	int r,c;
	cout << "Enter Your Row : ";cin >> r;
	cout << "Enter Your Columns : ";cin >> c;
	int a[r][c];
	int bou_sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << "Enter Value of a[" << i << "]["<<j
			<<"] : ";
			cin >> a[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << a[i][j] << " ";
			if(i==0 || i==r-1 || j==0 || j==c-1){
				bou_sum+=a[i][j];
			}
		}
		cout<<endl;
	}
	cout << "Boundary Sum Is : " << bou_sum;
	return 0;
}

//  0.0 0.1 0.2
//  1.0     1.2
//  2.0 2.1 2.2

//0.0  0.1  0.2  0.3
//1.0            1.3
//2.0            2.3
//3.0  3.1  3.2  3.3
