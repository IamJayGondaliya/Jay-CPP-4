#include<iostream>
using namespace std;

/*
		2. Programming in OOPs
		
		What is OOP ?
			- stands for Object Oriented Programming.
			- It is a concept where every procedure must be done through object.
			- It is a concept by which code becomes well structurized, well organized and well secured.
			- all the logical part of code will be done by object.
			
			Two components of OOP :
				- class :
					- collection of data members(attributes) and data member functions(methods).
					- blueprint of any procedure.
				- object :
					- instance(variable) of class.
					- reference of class.
					- to access the attributes or methods of class we must create object of class.
					
			Syntax:
				
				class ClassName {
					//access modifiers
					//attributes
					//methods
				};
				
				int main() {				
					ClassName objName;
					
					var = objName.attribute;
					objName.method();				
				}
				
		Principles of OOP :
		
			1. Encapsulation		(to wrap/combine)
				- every logic must be written in class
			2. Inheritence			(to share)
				- data can be shared or accessed through multiple class
			3. Polymorphism			(to behave in multiple way)
				- methods can be duplicated with different singatures.
			4. Data abstraction		(to secure)
				- manage which data can be accessed through object.
				
		Access Modifier :
			- decides where data will be accessed.
			
				- private	(default)	:
					- limited to class.
				- public :
					- can be accessed everywhere throgh object.
				- protected :
					- can be accessed in derived class.
		
*/

class Student {
	private:
		//attributes
		int id;
		string name;
		double per;
	public:	
		//methods
		void input() {
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter per\t: ";
			cin  >> per;
		}
		
		void output() {	
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Per\t: " << per << endl; 
		}
	
};


int main() {	
	Student s1;
	
	s1.input();	
	s1.output();	
}



















