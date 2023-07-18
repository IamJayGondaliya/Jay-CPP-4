#include<iostream>
using namespace std;

/*
	What is Constructor ?
		- It is a method which is automatically invoked when class
		  is instanciated.
		- instanciate	=> to create object
		- instance		=> object
		
		Rules to create constructor:
			- it must have same name as class name
			- it can't have any returntype (void, int, char, ...)
			- it can't return any value
			
		Types of constructor:
			 
			- default
			- parameterized
			- copy
			
	Destructor :
		- it is a method which is automatically invoted when object is destroyed.
		
		Rules to create destructor :
			- it must have same name as class name with '~' as prefix (tild)
			- it can't have any return type or parameters
			- it can't return any value
		
*/

class Hotel {
	private:
		string name;
	public:
		Hotel() {
			cout << "Default constructor\n";
		}
		
		~Hotel() {
			cout << "THE END" << endl;
		}
		
		Hotel(string name) {
			this->name = name;
			cout << "Welcome to the hotel " << name << " !!" << endl;
		}
		
		Hotel(string name,int id) {
			this->name = name;
			cout << "Welcome to the hotel " << name << " Id: " << id << " !!" << endl;
		}
		
		void getData() {
			cout << "Name: " << name << endl;
		}
};

int main() {
	Hotel h1;
	Hotel h2("Navjivan");
	Hotel h3("Mc'D",117);
	Hotel h4 = h2;
	
	h4.getData();
}
 
