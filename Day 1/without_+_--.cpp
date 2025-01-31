#include<iostream>

using namespace std;

int main(){
	int num1=10;
	int num2=20;
	
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	
	cout << "Num 1 = " << num1 << endl;
	cout << "Num 2 = " << num2 << endl;
	
	return 0;
}