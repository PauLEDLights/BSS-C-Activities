#include <iostream>
using namespace std;
 int main(){
 	string usern, pw, rt;
char again;

do	{
	cout<<"Enter your Username: ";
 	cin>>usern;
 	cout<<"Enter your Password: ";
 	cin>>pw;
 	if (usern == "Moritaka10"){
 		if (pw == "019283"){
 			cout<<"Log-in succesful! Welcome, "<<usern;
 			break;
		 }
		 else{
		 	cout<<"Wrong Password. Try Again? (y/n) \n";
		 	cin>>again;
		 }
	 }
 	else{
 		cout<<"Log-in failed, check your account details\n";
 		cout<<"Try again? (y/n)\n";
 		cin>>again;
 		}
} while (again == 'y');

	return 0;
}
