#include<iostream>
using namespace std;

/*
		What is inheritence?
			- to pass data between classes.
			- share data from one class to another class.
			- here main class which data will be shared is called parent class/super class/base class.
			- the class which consumes data of another class is called child class/sub class/derived class.
			
			- it can be done by following below syntax:
				
				class A {
					//dataOfClassA
				}
				
				class B : [access modifier-(default private)] A {
					//dataOfClassB
				}
				
			- here data of class A is shared with class B thus class B can possess both class's data.
			- parent class can't access child class's data but child class can access parent's data.
			
		Types of inheritence:
			- simple (single level)			class: 2
			- multilevel					class: >=3
			- hierarchical					class: >=3		parent: 1		child: >=2
			- Multiple						class: >=3		parent: >=2		child: 1
			- hybrid						class: >=3
				- hybrid is a combination of more than 1 different inheritence except of combo (single + multilevel)
*/

class A {
	protected:
		int a;		
};

class B : public A {
	protected:
		int b;		
};

class C : public B {
	private:
		int c;
	public:
		void setA() {
			cout << "Enter a: ";
			cin  >> a;
		} void getA() {
			cout << "a: " << a << endl;
		}
		
		void setB() {
			cout << "Enter b: ";
			cin  >> b;
		} void getB() {
			cout << "b: " << b << endl;
		}
		
		void setC() {
			cout << "Enter c: ";
			cin  >> c;
		} void getC() {
			cout << "c: " << c << endl;
		}
};

int main() {
	
	C c1;
	
	c1.setA();
	c1.setB();
	c1.setC();
	
	c1.getA();
	c1.getB();
	c1.getC();
	
}



















