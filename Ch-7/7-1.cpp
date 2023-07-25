#include<iostream>
using namespace std;

/*
		Exception: (Bug)
			
			- run time error.
			- exception break the code execution flow.
			- it mainly occures when certain task crosses the code execution time limit from OS side.
			- it can be considered as one type of logical mistake in code.
		
		Error 		:
			- it occures by syntax mistake.
			- it happens on compile time.
			- it occures by developers only.
		
		Exception 	:
			- it occures by logical mistake.
			- it happens on run time.
			- it occures by developers and user both.
		
		Exception handling	:
			- A method which hadles run time errors.
			- It prevents the exceptions by some blocks by providing an optional code
			  which will be only executed if exception is occured.
			- it can be handled by try and catch block.
			- syntax:
				
				try {
					//Statement which may cause an exception
					throw value/exception;
				}
				catch([excention/argument]) {
					//Solution for specific exception.
				}
						
*/

int main() {
	
	int a,b;
	
	cout << "Enter a and b: ";
	cin  >> a >> b;
	
	try {
		
		if(b == 0) {
			throw 3.14;
		} 
		else {
			cout << "Division: " << a / b << endl;
		}		
		
	}
	catch(int n) {
		cout << "Cannot devide by " << n << endl;
	}
	catch(char c) {
		cout << "Variable " << c << " can't be ZERO !!" << endl;
	}
	catch(...) {
		cout << "GENERAL EXCEPTION !!" << endl;
	}
	
	cout << "THE END !!";
	
}



















 
