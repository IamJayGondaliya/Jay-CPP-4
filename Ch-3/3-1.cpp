#include<iostream>
using namespace std;

ostream &tab(ostream &output) {
	return output << "\t";
}

class Emp {
	private:
		int id;
		string name;	
		double exp;
		static string cmp;
		
	public:
		//setter
		void setData() {
			cout << "Enter id: ";
			cin  >> id;
			cout << "Enter name: ";
			cin  >> name;
			cout << "Enter exp: ";
			cin  >> exp;
		}
		
		void changeCmp(string cmp) {
			this->cmp = cmp;
		}
		
		//getter
		void getData() {
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Exp\t: " << exp << endl;
		}
		
		void getDataInTable() {
			cout << id << tab << name << tab << exp << tab << cmp << endl;
		}
		
		
};

string Emp::cmp = "AT&T";


/*
		What is static member ?
			- fixed or directly accesible by class name.
			- common for all objects.
			- static data :
				- static data member		(attributes)
				- static member functions	(methods)
				
		Static data member :
			- must be created with 'static' keyword.
				static DataType varName;
			- must be assigned once in global area using scope resolution operator/Membership lable operator(::).
			
				DataType ClassName::varName = value;
				
*/

int main() {
	
	int n;
	
	cout << "Enter number of employees: ";
	cin  >> n;
	
	//Array of object
	Emp e[n];
	
	for(int i=0; i<n; i++) {
		e[i].setData();
	}
	
	e[1].changeCmp("ISO");
	
	for(int i=0; i<n; i++) {
		e[i].getDataInTable();
	}
	
}










