#include<iostream>
using namespace std;

/*

		Constructor:
			- A method which is automatically invoked when class is instanciated.

*/

class Student {
	private:
		int id;
		string name;
		double per;
	public:
		Student() {			
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter per\t: ";
			cin  >> per;
		}
		
		Student(int id,string name,double per) {
			this->id = id;
			this->name = name;
			this->per = per;
		}
		
		~Student() {
			cout << "Id\t: " << id << endl
			 	 << "Name\t: " << name << endl
			 	 << "Per\t: " << per << endl;
		}
};

int main() {
	
	Student s1;
	Student s2(102,"Uamang",84.51);
	Student s3 = s1;
	
}
