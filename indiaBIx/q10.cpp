#include <iostream>
 
using namespace std;// 31, 29, 24, 22, 17, ... 
                    //   -2  -5  -2  -5  -2
int main(){
	int start=31;
	for(int i=0;i<=10;i++){
		cout << start << " ";
		if(i%2==0){
			start-=2;
		}else{
			start-=5;
		}
	}
	
	return 0;
}