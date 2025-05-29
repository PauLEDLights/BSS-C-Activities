#include <iostream>
using namespace std;
 int main()
 {
 	float A1, A2, A3;
 	
 	cout<<"Input Age (1st): ";
 	cin>>A1;
 	
 	cout<<"Input Age (2nd): ";
 	cin>>A2;
 	
 	cout<<"Input Age (3rd): ";
 	cin>>A3;
 	
 	if (A1<=A2<=A3){
 		
 		cout<<""<<A1<<" is the youngest, "<<A3<<" is the oldest";
	 }
 	else if (A2<=A3<=A1) {
 		
 		cout<<""<<A2<<" is the youngest, "<<A1<<" is the oldest";
	 }
  	else if (A3<=A1<=A2) {
 		
 		cout<<""<<A3<<" is the youngest, "<<A2<<" is the oldest";
	 }	

 
 	return 0;
 }
