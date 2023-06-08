#include <iostream>
using namespace std;
int main(){
	float tempInCelcius,tempInFahrenheit;
	cout<<"Enter temperature in Celcius : "<<endl;
	cin>>tempInCelcius;

	tempInFahrenheit = (tempInCelcius * 9/5) + 32;
	
	cout<<"The Temperature in Farenheit is : "<<tempInFahrenheit;
	

return 0;
}

