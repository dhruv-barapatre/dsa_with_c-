#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Enter Number : ";
	cin >> num;
	int i=num;
	while(i>=1){
		if(i%2==0){
			cout << i << endl;
		}
		i--;
	}
	
	return 0;
}