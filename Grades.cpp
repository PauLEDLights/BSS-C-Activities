#include<iostream>
using namespace std;
int main()
{
	//Program that obtains 5 grades from user and computes the average of the grades
	
	float G1, G2, G3, G4, G5, sum = 0, ave = 0;
	
	
	cout<<"Input Grade in Filipino: \n";
	cin>>G1;

	cout<<"Input Grade in Science: \n";
	cin>>G2;

	cout<<"Input Grade in English: \n";
	cin>>G3;
	
	cout<<"Input Grade in Math: \n";
	cin>>G4;
	
	cout<<"Input Grade in MAPEH: \n";
	cin>>G5;		

	sum=G1+G2+G3+G4+G5;
	ave=sum/5;
	
	cout<<"Average:\t"<<ave<<"\n";
	int x = ave;
	int y = 75;
	if (x > y) {
  	cout << "Condition: Passed";
}
	if (y > x) {
	cout<<"Condition: Failed\n";
	cout<<"Please Contact Your Adviser";
	}
	
	return 0;
	
}

