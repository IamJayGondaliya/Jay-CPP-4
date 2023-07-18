/*
	- C Language
	- POP (Procedurel Oriented Programming)

	- History of C++
	
		- AT&T:
			- 1978, Bjarne Stroustrup pHD in OOP (Object Oriented Programming) joinned AT&T.
			- OOP	=> Simula (1967) 1st OOP language.
				- efficient than c language.
				- slower than c language.
			- 1979		=> 'C with classes'
			- 1983-85	=> 	C++	
			
			
	- Difference:  C/C++
	
					C					C++
	------------------------------------------------
	- Programming	POP					OOP
	- file type		.c					.cpp	
	- header file	stdio.h				iostream.h	(input output stream)
	- namespace		NA					std
										using namespace std;
	- return type	void				int
	- data types	int,float,char		int, float, double, char, string, bool (true/false)
	- output		printf() function	cout object
											=> cout << "Hello World";
											=> '<<'	=> insertion operator
											=> cout << "a: " << a;
	- input			scanf() function	cin object
											=> cin >> a;
											=> '>>'	=> extraction operator
	- ESC			\n, \t, ...			\n, \t, ...
	- manipulators	NA					endl
*/

/*
		1. WAP to create menu dirven system to perform CRUD operation on 1D array in c++.
		2. Create unit calculation progran in c++.
		3. WAP to find leap year from n1 to n2 and create 1D array of those leap years.
*/

#include<iostream>
using namespace std;

int main() {
	
	int n;
	string str;	
	
	cout << "Enter length: ";
	cin  >> n;
	cout << "Enter name: ";
	cin  >> str;
	
	cout << "Name: " << str << endl;
	
	int a[n];
	
	for(int i=0; i<n; i++) {
		cout << "Enter a[" << i << "]: ";
		cin  >> a[i];
	}
	
	for(int i=0; i<n; i++) {
		cout << "a[" << i << "]: " << a[i] << endl;
	}
	
}


















