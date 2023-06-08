#include<iostream>
using namespace std;
int counter(int);
int main(){
int num;
cout<<"Enter number : ";
cin>>num;
cout<<counter(num);
return 0;
}
int counter(int num){
	int count=1;
	while(num/10!=0){
		num /=10;
//		cout<<a<<endl;
		count++;
	}
	return count;
}

