
#include<iostream> 

using namespace std;

int main(){
	float decpounds,defrac;int pounds;
	cout<<"Enter Decimal Pounds : ";
	cin>>decpounds;
	pounds=decpounds;
	defrac=decpounds-pounds;
	cout<<defrac<<endl;
	defrac*=20;
	cout<<defrac<<endl; 
	cout<<pounds<<"."<<defrac;
	return 0;
}
