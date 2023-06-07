#include<iostream>
using namespace std;
int main()
{int a,b;
char c;
cout<<"Enter First Number:"<<endl;
cin>>a;
cout<<"Enter Second Number:"<<endl;
cin>>b;
cout<<"Which Operation Do you want to perform? ";
cin>>c;
if(c=='+')
cout<<a+b;
else if(c=='-')
cout<<a-b;
else if(c=='*')
cout<<a*b;
else if(c=='/'&&b!=0)
cout<<a/b;
else 
cout<<"operation is not valid" ;
return 0;
}

