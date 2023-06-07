#include<iostream>
using namespace std;
int main(){
	int num,remainder=0,sum=0,dupli=0;
cout<<"Enter a number : ";
cin>>num;
dupli=num;
while(dupli>0){
	remainder = dupli%10;
	cout<<"Remainder "<<remainder<<endl;
	dupli/=10;
	sum += remainder*remainder*remainder;
	cout<<"sum : "<<sum<<endl;
}
(num==sum)?cout<<"Armstrong":cout<<"Not armstrong";

return 0;
}

