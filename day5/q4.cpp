//22, 21, 23, 22, 24, 23,

#include <iostream>

using namespace std;//22, 21, 23, 22, 24, 23,
					//  -1  +2  -1  +2  -1   	
int main(){
	int start=22;
	
	for(int i=0;i<=10;i++){
		cout << start << " ";
		if(i%2==0){
			start-=1;
		}else{
			start+=2;
		}
	}
	
	return 0;
}