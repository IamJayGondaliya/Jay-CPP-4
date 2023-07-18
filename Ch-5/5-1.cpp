#include<iostream>
using namespace std;

/*
	What is Polymorphism ?
		- Poly		: 	Multiple/different
		- Morphs	:	Forms / Structure / behaviour
		- It is a concept where any method or attribute have different behaviours.
		
		Types:
			- Run time	:
				- Method Overriding
				- Virtual function
			- Compile time :
				- Method overloading
				- Constructor overloading
				- Operator overloading
				
	Method overlaoding :
		- same named method in same class with different signatures.
		- rules:
			- all methods must have same name
			- all methods must be in same class
			- all methods must have different signatures(parameters, return type)
			
	Method overriding :
		- same named method in derived class with same signatures.
		- rules:
			- all methods must have same name
			- all methods must be in derived(child) class.
			- all methods must have same signatures(parameters, return type)
*/

class Math {
	public:
		void sum(int a,int b) {
			cout << "Parent class\n";
			cout << "Sum of " << a << " + " << b << " = " << a+b << endl;
		}
		
		void sum(int a,int b, int c) {
			cout << "Sum of " << a << " + " << b  << " + " << c << " = " << a+b+c << endl;
		}
		
//		//Default parameters
//		void sum(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0) {
//			cout << "Sum: " << a+b+c+d+e << endl;
//		}
};

class Math2 : public Math {
	public:
		void sum(int m,int n) {
			cout << "Child class\n";
			cout << "Sum: " << m+n << endl;
		}
};

int main() {
	
	Math2 m;
	
	m.sum(10,5);
	m.sum(5, 6);
	m.Math::sum(10, 5);
	
}











