#include<iostream>
using namespace std;
int main()
{int a,b,c;
cout<<"For (a+b)^2   :   Press 1"<<endl;
cout<<"For (a-b)^2   :   Press 2"<<endl;
cout<<"\nEnter your Option: ";
cin>>c;
cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of a: ";
cin>>b;
if(c==1){
cout<<"(a+b)^2 = a^2+b^2+2ab"<<endl;
cout<<"Result = "<<a*a+b*b+2*a*b<<endl;
}
if(c==2){
cout<<"(a-b)^2 = a^2+b^2-2ab"<<endl;
cout<<"Result = "<<a*a+b*b-2*a*b<<endl;
}
return 0;
}

