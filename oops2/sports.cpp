#include <iostream>

using namespace std;

class Sports{
	string role,gameName,name;
	int age;
	
	public :
	void input(string name,string gameName,string role,int age){
		this->age=age;
		this->gameName=gameName;
		this->name=name;
		this->role=role;
	}
	void output(){
		cout << "Name : "<< this->name << endl ;
		cout << "Age : "<< this->age << endl ;
		cout << "Game name : "<< this->gameName << endl ;
		cout << "Role : "<< this->role << endl << endl ;
	}

};

int main(){
	Sports p1,p2;
	p1.input("Dhruv","Football","Goal Stopper",19);
	p2.input("Dhruv","Football","Goal Stopper",19);	
	
	p2.output();
	p2.output();
	return 0;
}
