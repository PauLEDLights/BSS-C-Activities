#include <iostream>
using namespace std;
 int main()
 {
 	float weigh, max = 50, tax;
 	
 	cout<<"Input luggage weight (lbs): ";
 	cin>>weigh;
 	
 	if (weigh<=max){
 		
 		cout<<"Luggage is under maximum weight limit. Thank you for your business!";
	 }
 	else {
 		tax = 25; 
 		cout<<"Luggage exceed weight limit, $"<<tax<<" will be charged. \nThank you for your business";
	 }
 	

 
 	return 0;
 }

