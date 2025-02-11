#include <iostream>

using namespace std;

int main(){
	int age;
	
	cout << "Enter Your Age : ";
	cin >> age;
	
	if(age>=18){
		if(age>64){
			cout << "You can not Vote";
		}
		else{
			cout << "You are aligible";
		}
	}else{
		if(age>0){
			cout << "You can not Vote";
		}else{
			cout << "Enter Valid age";
		}
		
	}
	
	
	return 0;
}