#include<iostream>
using namespace std;
int main()
{int i,n,ent,pos=0,neg=0;
cout<<"How Many Numbers:";
cin>>n;
for(i=0;i<n;i++){
	cout<<"Enter Number:";
	cin>>ent;
	if(ent<0)
	neg++;
	else
	pos++;
}
cout<<"There are "<<pos<<" positive numbers.";
cout<<"And there are "<<neg<<" negative numbers.";

return 0;
}

