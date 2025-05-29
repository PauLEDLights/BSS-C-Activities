#include <iostream>
using namespace std;

int main(){
 	string usern, pw, rt;
char again;
float age, days;

do	{
	cout<<"Enter your Username: ";
 	cin>>usern;
 	cout<<"Enter your Password: ";
 	cin>>pw;
 	if (usern == "admin6"){
 		if (pw == "admin12345"){
 			cout<<"Log-in succesful! Welcome, "<<usern;
 			break;
		 }
		 else{
		 	cout<<"Wrong Password. Try Again? (y/n) \n";
		 	cin>>again;
		 	if (again == 'n')
 			return 0;
		 }
	 }
 	else{
 		cout<<"Log-in failed, check your account details\n";
 		cout<<"Try again? (y/n)\n";
 		cin>>again;
 		if (again == 'n')
 			return 0;
 		}
} while (again == 'y');
			

	cout<<"\nPlease type in your Age\n";
	cin>>age;
	
	if (age <= 0){
		
		cout<<"\nInvalid Age.";

	}
	else{
		(days = age * 365);
		cout<<"\n"<<days<<"\nThis is your age in days!";
	}

	return 0;
}
