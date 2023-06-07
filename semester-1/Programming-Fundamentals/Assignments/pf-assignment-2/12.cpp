#include<iostream>
using namespace std;
int main()
{
	int cookies;
	cout<<"Enter the total number of cookies: ";
	cin>>cookies;
	int box=cookies/24;
	cout<<"The number of boxes are: "<<box<<endl;
	int remainBox=cookies%24;
	cout<<"The remaining boxes are: "<<remainBox<<endl;
	int container=box/75;
	cout<<"The number of containers are: "<<container<<endl;
	int remainContainer=box%75;
	cout<<"The remaining containers are: "<<remainContainer;
	
	return 0;
}
