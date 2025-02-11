#include <iostream>

using namespace std;

int main(){
	int n,i=0;
	cout << "Enter Last Number : "; 
	cin >> n;   
	int sum=0;
	int last_sum= 1; // 0+1 =1
	int series=1;
	cout << "0 "; 
	while(i<=n){ //t 
		
		cout << series << " ";  // 0
		series=sum+ last_sum; // 1
		sum=last_sum;//1 
		last_sum=series;
		i++;
	}
	
	return 0;
}