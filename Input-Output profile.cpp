#include<iostream>
using namespace std;
int main()
{
	//Obtain the ff information from the user and display in a resume format.
	//  name, age, address, phone number, school, and department.
	
	
	string name, address, school, dept;
	int age, numb;
	
	cout<<"Type your Name: ";
	cin>>name;
	
	cout<<"Type your Age: ";
	cin>>age;
	
	cout<<"Type your Address: ";
	cin>>address;
	
	cout<<"Type your Contact number: ";
	cin>>numb;
	
	cout<<"Type your University: ";
	cin>>school;
	
	cout<<"Type your Department: ";
	cin>>dept;
	
	cout<<"\n\n\t\tProfile\n";
	cout<<"Name:\t "<<name;
	cout<<"\nAge:\t "<<age;
	cout<<"\nAddress:\t "<<address;
	cout<<"\nContact Number:\t "<<numb;
	cout<<"\nUniversity:\t "<<school;
	cout<<"\nDepartment:\t "<<dept;
	return 0;
	
}
