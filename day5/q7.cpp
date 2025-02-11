#include <iostream>

using namespace std;// 58, 52, 46, 40, 34
					//  -6   -6  -6  -6 
int main(){
	int start=58;
	for(int i=0;i<=10;i++){
		cout << start << " ";
		start-=6;
	}
	
	return 0;
}