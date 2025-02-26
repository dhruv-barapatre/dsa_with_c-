    // diagonal, anti diagonal element sum
    #include <iostream>

using namespace std;
int main()
{
	int r,c;
	cout << "Enter Your Row : ";cin >> r;
	cout << "Enter Your Columns : ";cin >> c;
	int a[r][c];
	int dia_sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << "Enter Value of a[" << i << "]["<<j
			<<"] : ";
			cin >> a[i][j];
			if(i==j){
				dia_sum+=a[i][j];
			}
		}
	}
	int b=c-1,antidia_sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
		antidia_sum+=a[i][b];
		b--;
	}
	cout << "Dia Sum Is : " << dia_sum << endl << "Dia Sum Is : "  << antidia_sum;
	return 0;
}

//