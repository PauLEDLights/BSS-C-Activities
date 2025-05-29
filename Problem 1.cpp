#include <iostream>
using namespace std;
int main() 
{
    float temp;

	cout<<"Please type in your temperature (°C).\n";
	cin>>temp;
	
	if (temp >= 38){
		
		cout<<"\nTemperature higher than normal, please go to a hospital for a checkup.";

	}
	else{

		cout<<"\nTemperature in normal levels.";
	}
    return 0;
}
