#include<iostream>
using namespace std;
int main(){
int number[5],square[5],cube[5],sum[5];
for(int i=0;i<5;i++){
	cout<<"Enter number "<<i+1<<" : ";
	cin>>number[i];
}
for(int i=0;i<5;i++){
	square[i]=number[i]*number[i];
}
for(int i=0;i<5;i++){
	cube[i]=square[i]*number[i];
}
for(int i=0;i<5;i++){
	sum[i]=number[i]+square[i]+cube[i];
}
for(int i=0;i<5;i++){
	cout<<"square : "<<square[i]<<endl;
}
for(int i=0;i<5;i++){
	cout<<"cube : "<<cube[i]<<endl;
}
for(int i=0;i<5;i++){
	cout<<"sum : "<<sum[i]<<endl;
}
return 0;
}

