#include <iostream>
 //  odd             //    +4    +4 
using namespace std;// 3, 4, 7, 8, 11, 12, .
//	even     		//       +4     +4  	
int main(){
	int start_odd=3;
	int start_even=4;
	for(int i=1;i<=10;i++){
		if(i%2==0){
			cout << start_even << " ";
			start_even+=4;
		}else{
			cout << start_odd << " ";
			start_odd+=4;
		}
	}
	
	return 0;
}