#include<iostream>
using namespace std;

/*
	virtual function:
	
		- parent => child class methods
		- remove ambiguity permenantly.
		
		- virtual means a common method for all joinned classes.
		- it's different than method overriding since it's reverse inheritence feature.
	
	Abstract class:
		- class which can't be instanciated.
		- a class to which we can't create any object.
		- instanciate: to create object
		
		- to make a class an abstract class, we've to put a pure virtual function into it in C++.
		Pure virtual function:
			- virtual function with initial value ZERO.
			=>		virtual rType funName([arguments]) = 0;
			
			- it can't have body in current class but it will be defined(create body) into it's 
			  child class.
			- if we won't define it into child class with same signatures(name, parameters, return type),
			  the child class also will be abstract.
	
*/

class Secured {
	private: 
		string userName = "Admin";
		string password = "Admin@123";
	public:
		//Pure virtual function
		virtual void key() = 0;
		
		void getCredentials() {
			cout << "Username\t: " << userName << endl
				 << "Password\t: " << password << endl;
		}
		
};

class User : public Secured {
	public:
		void key() {
			cout << "It's unlocked !!" << endl;
		}
};

int main() {
	
	User s;
	
	s.getCredentials();
	
}















