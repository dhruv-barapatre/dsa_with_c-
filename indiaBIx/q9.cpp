#include <iostream>
 
using namespace std;// 8, 22, 8, 28, 8, .
                    //  +14 -14 +20 -20
int main(){
	int start=22;
	for(int i=1;i<=10;i++){
		if(i%2==0){
			cout << start << " ";
			start+=6;
		}else{
			cout << "8 ";
		}
	}
	
	return 0;
}