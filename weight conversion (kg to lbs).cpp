#include<iostream>
using namespace std;
int main()
{
	//Writing program that converts kilogram (kg) into pounds (lb)
	//1kg = 2.2lb
	
	float weight, conv, lb = 2.2;
	
	
	cout<<"Input weight (kg): \n";
	cin>>weight;

	conv=weight*lb;
	
	cout<<"weight (lb): \t"<<conv<<"\n";
	cout<<"Conversion: \t"<<weight<<"kg = "<<conv<<"lb";
	
	return 0;
	
}

