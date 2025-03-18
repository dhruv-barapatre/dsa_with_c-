#include <iostream>

using namespace std;

int sum(int n,int i)
{
	cout << i << " ";
	i++;
	if(i<=n){
		return sum(n,i);
	}
}
int main(){
	
	int n,i=1;
	cout << "Enter Value Of n: ";
	cin >> n;
	
	sum(n,i);
	
}
