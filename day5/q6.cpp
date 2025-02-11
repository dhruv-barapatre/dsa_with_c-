//21, 9, 21, 11, 21, 13, 21

#include <iostream>

using namespace std;// 21,  9,  21, 11, 21, 13, 21
					//  -12  +12  -10 +10 -8  +8 	
int main(){
	int start=21;
	int num=14;
	for(int i=0;i<=10;i++){
		cout << start << " ";
		if(i%2==0){
			num-=2;
			start-=num;
		}else{
			start+=num;
		}
	}
	
	return 0;
}