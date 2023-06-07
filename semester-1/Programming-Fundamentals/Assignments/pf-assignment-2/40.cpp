#include<iostream>
using namespace std;
int main()
{int a;
cout<<"Consumed Units are: ";
cin>>a;
if(a<=300)
cout<<"Bill is : Rs. "<<a*3;
else
cout<<"Bill is : Rs. "<<a*3.5;
return 0;
}

