#include<iostream>
#include <string>
using namespace std;
int sum(int a , int b){
	return a+b;
}
int sub(int a , int b){
	return a-b;
}
int multi(int a , int b){
	return a*b;
}
float div(float a , float b){
	return a/b;
}

int main(){
	int value,num1,num2;
	string decision;
	do{
		cout<<"Enter first Number : "<<endl;
cin>>num1;
cout<<"1 : sum"<<endl;
cout<<"2 : minus"<<endl;
cout<<"3 : multiply"<<endl;
cout<<"4 : divide"<<endl;
cout<<"Enter decision : ";
cin>>value;
cout<<"Enter second Number : "<<endl;
cin>>num2;

if(value==1){
	cout<<"Your sum is : "<<sum(num1,num2)<<endl;
}
else if(value==2){
	cout<<"Your subtraction is : "<<sub(num1,num2)<<endl;
}
else if(value==3){
	cout<<"Your multiplication is : "<<multi(num1,num2)<<endl;
}
else if(value==4&&num2!=0){
	cout<<"Your divsion is : "<<div(num1,num2)<<endl;
}
else{
	cout<<"Please dont't try to divide a number by zero"<<endl;
}

cout<<"Wanna end the calculator Answer in either yes or no ";
cin>>decision;
	}
while(decision!="yes");


return 0;
}

