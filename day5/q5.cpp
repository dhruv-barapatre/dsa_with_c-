// 53, 53, 40, 40, 27, 27, ...

#include <iostream>

using namespace std;// 53, 53, 40, 40, 27, 27, ...
					//  -1  +2  -1  +2  -1   	
int main(){
	int start=53;
	
	for(int i=0;i<=10;i++){
		cout << start << " ";
		if(i%2==0){
			start-=0;
		}else{
			start-=13;
		}
	}
	
	return 0;
}