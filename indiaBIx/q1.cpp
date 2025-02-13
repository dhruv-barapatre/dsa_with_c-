#include <iostream>
using namespace std;
int main(){
	double start_point=2;
	
	for(int i=0;i<=5;i++){
		cout << start_point << " ";
		start_point/=2;
	}
	
	return 0;
}
