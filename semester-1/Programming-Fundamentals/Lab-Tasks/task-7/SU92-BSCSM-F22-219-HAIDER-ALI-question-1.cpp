#include<iostream>
using namespace std;
int main(){
int num,flag=0;
cout<<"Enter a number : ";
cin>>num;
for(int i =2;i<=num;i++){
int j;
for(j=2;j<i;j++){
	if(i%j==0){
		flag =1 ;
	}
}
	if(flag==0){
		cout<<"Prime : "<<j<<endl;
	}
	else { 
		flag =0;
	}	
}
return 0;
}

