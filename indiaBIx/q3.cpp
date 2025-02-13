#include <iostream>

using namespace std;//36, 34, 30, 28, 24
					//  -02  -4  -2  -4     	
int main(){
	int start=36;
	
	for(int i=0;i<=10;i++){
		cout << start << " ";
		if(i%2==0){
			start-=2;
		}else{
			start-=4;
		}
	}
	
	return 0;
}