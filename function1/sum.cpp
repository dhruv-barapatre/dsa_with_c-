#include <iostream>

using namespace std;

int sum(int number){
	int sum=0;
	for(int i=1;i<=number;i++){
		sum+=i;
	}
	cout << sum;
}
int main(){
	int number;
	cout << "Enter Value Of Number : ";
	cin >> number;
	sum(number);
	
	return 0;
}

 // wap to find sum of 1 to user passed number using udf.