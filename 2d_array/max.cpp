    // max element from 2d array
    
    #include <iostream>

using namespace std;
int main()
{
	int r,c;
	cout << "Enter Your Row : ";cin >> r;
	cout << "Enter Your Columns : ";cin >> c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << "Enter Value of a[" << r << "]["<<c<<"] : ";
			cin >> a[i][j];
		}
	}
	int max=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(max < a[i][j]){
				max=a[i][j];
			}
		}
	}
	cout << max;
	return 0;
}