// wap to find factorial user passed number using udf.

#include <iostream>

using namespace std;

int factorial(int number){
	int fact=1;
	for(int i=1;i<=number;i++){
		fact*=i;
	}
	cout << fact;
}
int main(){
	int number;
	cout << "Enter Value Of Number : ";
	cin >> number;
	factorial(number);
	
	return 0;
}

 