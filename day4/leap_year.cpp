#include <iostream>

using namespace std;

int main(){
	int start_year=2000,last_year=3000;
	while(start_year<=last_year){
		if(start_year%4==0){
			cout << start_year << " ";
		}
			start_year++;
	}
	
	return 0;
}