#include<iostream>
using namespace std;
int main(){
int integer,sum;
float real;
	cout<<"Enter Floating point number : ";
	cin>>real;
	cout<<real<<endl;
	integer = real;
	cout<<"integer : "<<integer<<endl;
	real =(real - integer)*10;
	cout<<"Real :"<<real<<endl;
	sum = integer+real;
	cout<<"Sum : "<<sum;	

return 0;
}

