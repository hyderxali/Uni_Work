#include<iostream>
using namespace std;
int reverse(int);
int main(){
int num;
cout<<"Enter the number you want to Reverse : ";
cin>>num;
cout<<reverse(num);
return 0;
}
int reverse(int num){
	int rev = 0 , remainder = 0;
	while(num!=0){
		remainder = num%10;
		rev = rev * 10 + remainder;
		num/=10;
	}
	return rev;
}

