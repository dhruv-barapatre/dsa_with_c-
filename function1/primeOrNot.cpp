  // wap to check number is prime or not of user passed number using udf.

#include <iostream>

using namespace std;

int prime(int number){
	int div=0;
	for(int i=1;i<=number;i++){
		if(number%i==0){
			div++;
		}
	}
	if(div==2){
		cout << "Number is Prime";
	}else{
		cout << "Number Is not Prime";
	}
}
int main(){
	int number;
	cout << "Enter Value Of Number : ";
	cin >> number;
	prime(number);
	
	return 0;
}

 