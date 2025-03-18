#include <iostream>

using namespace std;

int sum(int n)
{
	cout << n << " ";
	n--;
	if(n>0){
		return sum(n);
	}
}
int main(){
	
	int n,i=1;
	cout << "Enter Value Of n: ";
	cin >> n;
	
	sum(n);
	
}
