#include <iostream>
using namespace std;
 int main()
 {
 	float age, req = 18, wait;
 	
 	cout<<"Input Age: ";
 	cin>>age;
 	
 	if (age>=req){
 		
 		cout<<"Applicant eligible to vote for elections.";
	 }
 	else {
 		wait = 18-age; 
 		cout<<"Ineligible to vote for elections, please wait "<<wait<<" year(s)";
	 }
 	

 
 	return 0;
 }

