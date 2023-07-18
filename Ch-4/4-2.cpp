#include<iostream>
using namespace std;

/*
	- single
	- multilevel
	- multiple
	- hierarchical
	- hybrid
	
	Ambigous: (Duplicate)
		- same method from different sources.
		- mainly occured in multiple and hybrid inheritence.
		
		Solution:
			1. Temporory:
				- using scope resolution operator
			2. Permenant:
				- using virtual method
		
*/

class RBI {
	protected:
		double dollarRate = 82.61;		
		double roi = 6.50;	
	public:
		void getRate() {
			cout << "Dollar\t: " << dollarRate << endl
				 << "ROI\t: " << roi << endl;
		}
};

class Axis : public RBI {
	private:
		double axis_roi = roi + 1.35;
	public:
		void getAxisROI() {
			cout << "Axis ROI\t: " << axis_roi << endl;
		}	
};

class BOB : public RBI {
	private:
		double bob_roi = roi + 1.25;
	public:
		void getBOBROI() {
			cout << "BOB ROI\t: " << bob_roi << endl;
		}	
};

class CSC : public Axis, public BOB {
	private:
		int choice;
	public:
		void getService() {
			
			do {
				
				cout << "Enter..." << endl
					 << "1) RBI rates" << endl
					 << "2) Axis rates" << endl
					 << "3) BOB rates" << endl
					 << "4) EXIT !!" << endl
					 << "Enter your choice: ";
				cin  >> choice;
				
				switch(choice) {
					case 1:
						Axis::getRate();
						break;
					case 2:
						getAxisROI();
						break;
					case 3:
						getBOBROI();
						break;
					case 4:
						break;
					default:
						cout << "Invalid input !!" << endl;
				}
				
			} while(choice != 4);
			
		}
};

int main() {

	CSC cust;
	
	cust.getService();
		
	
}

