#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter number : ";
int n1=0,n2=1,n3;
cin>>num;
for(int i=0;i<num;i++){
	if(i==0){
		cout<<n1<<"\t";
		continue;
	}
	else if(i==1){
		cout<<n2<<"\t";
		continue;
	}
	n3=n1+n2;
	cout<<n3<<"\t";
	n1=n2;
	n2=n3;
}
return 0;
}

