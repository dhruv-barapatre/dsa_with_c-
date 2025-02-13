#include <iostream>

using namespace std;//7, 10, 8, 11, 9, 12,
					//  3  2   3  2   3   	
int main(){
	int start=7;
	
	for(int i=0;i<=10;i++){
		cout << start << " ";
		if(i%2==0){
			start+=3;
		}else{
			start-=2;
		}
	}
	
	return 0;
}