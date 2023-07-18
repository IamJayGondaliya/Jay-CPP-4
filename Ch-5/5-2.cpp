#include<iostream>
using namespace std;

/*

		Topic			Method Overloading			Method Overriding
		-----------------------------------------------------------------
		1. type			compile time				run time
		2. name			same						same
		3. signature	different					same
		   (return type, param)					
		4. class		same						derived

		Operator overloading :
			- use operators to invoke methods.
			- invokes method named 'operator' with specified symbol.
			
*/

class Demo {
	private:
		int a;
	public:
		void setData() {
			cout << "Enter value: ";
			cin  >> a;
		}
		
		void getData() {
			cout << "a: " << a << endl;
		}
		
		//Binary operator overloading
		Demo operator+(Demo d) {
			Demo tmp;
			tmp.a = a + d.a;
		//	d3.a  = d1.a + d2.a;
			return tmp;
		}
		
		Demo operator-(Demo d) {
			Demo tmp;
			tmp.a = a - d.a;
			return tmp;
		}
		
		//Unary operator overloading
		//POST
		Demo operator++(int x) {
			Demo tmp;
			tmp.a = a++;
			return tmp;
		}
		
		//PRE
		Demo operator++() {
			Demo tmp;
			tmp.a = ++a;
			return tmp;
		}
		
};

int main() {
	
	Demo d1,d2;
	
	d1.setData();
	
//	d2 = d1++;	// d2 = d1 + 1;	 =>  d2 = d1.operator.++(1);	Post
	d2 = ++d1;	// d2 = 1 + d1;	 =>  d2 = d1.operator++();		Pre
	
	d1.getData();
	d2.getData();
	
}







