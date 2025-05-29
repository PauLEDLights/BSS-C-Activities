#include <iostream>
using namespace std;
 int main(){
 	string usern, pw, rt;
 	
 	cout<<"Enter your Username: ";
 	cin>>usern;
 	cout<<"Enter your Password: ";
 	cin>>pw;
 	if (usern == "Moritaka10"){
 		if (pw == "019283"){
 			cout<<"Log-in succesful!";
		 }
		 else{
		 	cout<<"Wrong Password. Try Again.";
		 }
	 }
 	else{
 		cout<<"Log-in failed, check your account details\n";
 		cout<<"Try again? \n(y/n)\n";
 		cin>>rt;
 	
	while (rt == "y") {
	
 	cout<<"Enter your Username: ";
 	cin>>usern;
 	cout<<"Enter your Password: ";
 	cin>>pw;
 	if (usern == "Moritaka10"){
 		if (pw == "019283"){
 			cout<<"Log-in succesful!";
		 }
		 else{
		 	cout<<"Wrong Password. Try Again.";
		 }
	 }
 	else{
 		cout<<"Log-in failed, check your account details\n";
 		cout<<"Try again? \n(y/n)\n";
 		cin>>rt;
 	
 		
	 }
 	return 0;
 }
 }
 }


