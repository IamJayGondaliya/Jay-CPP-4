#include<iostream>
using namespace std;

int main() {
	
	char psw[20];
	int upr = 0,i;
	
	cout << "Enter password: ";
	cin  >> psw;
	
	for(i=0; psw[i]!=NULL; i++) {		
		if(psw[i]>=65 && psw[i]<=90) {
			upr++;
		}		
	}
	
	try {
		if(upr!=0) {
			cout << "Valid password !!";
		}
		else {
			throw 0;
		}
	}
	catch(int n) {
		cout << "Invalid password !!";
	}
	
}


