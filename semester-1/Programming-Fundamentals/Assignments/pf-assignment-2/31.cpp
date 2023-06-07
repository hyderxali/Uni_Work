#include<iostream>
using namespace std;
int main()
{int t;
cout<<"Enter Temprature in Centigrade: ";
cin>>t;
if(t<=0)
{
	cout<<"Freezing weather";
}
if(t>0&&t<=10)
{
	cout<<" Very Cold weather";
}
if(t>10&&t<=20)
{
	cout<<"Cold weather";
}
if(t>20&&t<=30)
{
	cout<<"Normal";
}
if(t>30&&t<=40)
{
	cout<<"Its Hot";
}
if(t>40)
{
	cout<<"Its Very Hot";
}
return 0;
}

 

