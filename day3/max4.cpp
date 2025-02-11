#include <iostream>

using namespace std;

int main(){
	int a,b,c,d;
	cout << "Enter Value of A :";
	cin >> a;
	cout << "Enter Value of B :";
	cin >> b;
	cout << "Enter Value of C :";
	cin >> c;
	cout << "Enter Value of D :";
	cin >> d;
	if(a==b || b==c || c==d || d==a || c==a || b==d){
		cout << "Do not Enter Same Number";
		
	}
	else if(a>b){
		if(a>c){
			if(a>d){
				cout << "A Is max";
			}else{
				cout << "D Is max";
			}
		}else{
			if(c>d){
				cout << "C Is max";
			}	else{
				cout << "D Is max";
			}
		}
	}else{
		if(b>c){
			if(b>d){
				cout << "B Is max";
			}else{
				cout << "D Is max";
			}
		}else{
			if(c>d){
				cout << "C Is max";
			}else{
				cout << "D Is max";
			}
		}
	}
	return 0;
}