#include<iostream>
using namespace std;
int main(){
int length;
cout<<"Enter length : ";
cin>>length;
for(int i=0;i<length;i++){
	for(int k=length-1;k>i;k--){
		cout<<" ";
	}
	for(int j=0;j<=i;j++){
		cout<<"* ";
	}
	cout<<endl;
}
for(int i=0;i<length;i++){
	for(int k=0;k<i;k++){
		cout<<" ";
	}
	for(int j=length-1;j>i;j--){
		cout<<" *";
	}
	cout<<endl;
}

return 0;
}

