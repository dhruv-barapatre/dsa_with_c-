#include <iostream>
using namespace std;

class School
{
	string school_name;
	public : 
	void set(string school){
		this->school_name=school;
	}
	void get(){
		cout << "School Name : " << this->school_name;
	}
};
int main()
{
	School school;
	school.set("Aastik School");
	school.get();
	return 0;
}   


// school
// trustee - authority all
// principal - teacher to student
// teacher - monitor to students
// monitor - student
// student -

//all difrent class and set and get methods
