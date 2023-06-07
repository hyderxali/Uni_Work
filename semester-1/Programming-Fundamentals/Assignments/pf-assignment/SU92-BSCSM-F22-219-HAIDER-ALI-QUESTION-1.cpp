#include <iostream>
using namespace std;
int main(){
int a,b,c,d,result;
char dummychar='/';
cout<<"Enter first fraction : ";
cin>>a>>dummychar>>b;
cout<<"Enter second fraciton : ";
cin>>c>>dummychar>>d;

result = (a*d)+(b*c);
cout<<"Final fraction is : "<<result<<dummychar<<b*d;

return 0;
}

