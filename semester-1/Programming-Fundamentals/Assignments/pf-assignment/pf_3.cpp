#include <iostream>
#include <CTYPE.H>
using namespace std;
int main(){
	float temp_c,temp_f;
	cout<<"Enter temperature in degree celcius : ";
	cin>>temp_c;
	temp_f=(temp_c * 9)/5+32;
	cout<<temp_c<<"degree celcius into Fahrenheit : "<<temp_f;
return 0;
}

