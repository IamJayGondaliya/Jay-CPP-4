#include<iostream>
using namespace std;

/*
		Data Abstraction: (to secure/to restrict)
			
			- hide logic and display only essencial part of interface(ui) to the user.
			- prevent the user from accessing the app data.
			- restrict the user from attributes.
			
		Abstraction in Inheritece using access modifiers:
			- Access modifiers/specifiers:
				- public:		accessible everywhere through object
				- private:		accessible in scope of class its own and friend function.
				- protected:	accessible in scope of class and derived(child) class's scope
*/

class Google {
	protected:
		string username;
		string psw;
	public:
		
		Google() {
			string p1,p2;			
			cout << "Enter username\t: ";
			cin  >> username;
			cout << "Create password\t: ";
			cin  >> p1;
			cout << "Confirm password\t: ";
			cin  >> p2;
			
			tmp:
			if(p1 == p2) {
				psw = p1;
				system("cls");
				cout << "Logged in successfully..." << endl << endl;
			}
			else {
				system("cls");
				cout << "Password mismatch !!" << endl;
				cout << "Enter username\t: " << username << endl;
				cout << "Create password\t: " << p1 << endl;
				cout << "Confirm password\t: ";
				cin  >> p2;
				
				goto tmp;
			}
		}
		
		void signIn() {
			string u,p;
			
			tmp:
			cout << "Enter username\t: ";
			cin  >> u;
			cout << "Enter password\t: ";
			cin  >> p;
			
			if(u == username && p == psw) {
				system("cls");
				cout << "Signed in successfully....!!";
			}
			else if(u != username) {
				system("cls");
				cout << "Invalid username !!" << endl << endl;
				goto tmp;
			}
			else {
				system("cls");
				cout << "Invalid password !!" << endl << endl;
				goto tmp;				
			}
			
		}
		
		signOut() {
			
		}
};

class Amazon : private Google {
	public:
		void signWithGoogle() {
			signIn();
		}
		
		void changePassword() {
			string p1,p2;
			
			tp1:
			cout << "\n\nEnter your old password: ";
			cin  >> p1;
			
			if(p1==psw) {
				
				tmp:
				cout << "Enter new password\t: ";
				cin  >> p1;				
				if(p1==psw) {
					system("cls");
					cout << "It can't be your old password again !!" << endl;
					goto tmp;
				}
				t1:			
				cout << "\nConfirm new password\t: ";
				cin  >> p2;
				
				if(p1==p2) {
					cout << "Hurrrayyyy !!\nPassword has been updated !!" << endl;
				}
				else {
					system("cls");
					cout << "Password mismatch !!\n";					
					cout << "Enter new password\t: " << p1;	
					goto t1;					
				}
				
			}
			else {
				system("cls");
				cout << "Password mismatch !!" << endl;
				goto tp1;
			}
		}
};

int main() {
	
	Amazon a;
	
	a.signWithGoogle();
	
	a.changePassword();
}










