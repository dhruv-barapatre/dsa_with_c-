#include <iostream>

using namespace std;

int findCube(int cube){
	return cube * cube * cube;
}

int main(){
	
	int cube;
	cout << "Enter Number : ";
	cin >> cube;
	cout << findCube(cube);
	
	return 0;
}
// wap to find cube of user passed number using udf.
