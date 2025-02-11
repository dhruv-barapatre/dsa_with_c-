#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cout << "Enter Value of A :";
	cin >> a;
	cout << "Enter Value of B :";
	cin >> b;
	cout << "Enter Value of C :";
	cin >> c;
	if(a==b || b==c || c==a){
		cout << "Do not Enter Same Number";
		
	}
	else if(a>b){
		if(a>c){
			cout << "A Is max";
		}else{
			cout << "C Is max";
		}
	}else{
		if(b>c){
			cout << "B Is max";
		}else{
			cout << "C Is max";
		}
	}
	return 0;
}