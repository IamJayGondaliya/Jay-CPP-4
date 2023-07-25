#include<iostream>
using namespace std;

class A {
	protected:
		int a;	
	public:
		void setA() {
			cout << "Enter a: ";
			cin  >> a;
		} void getA() {
			cout << "a: " << a << endl;
		}	
};

class B : public A {
	protected:
		int b;
	public:			
		void setB() {
			cout << "Enter b: ";
			cin  >> b;
		} void getB() {
			cout << "b: " << b << endl;
		}
};

class C : public B {
	private:
		int c;
	public:		
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
