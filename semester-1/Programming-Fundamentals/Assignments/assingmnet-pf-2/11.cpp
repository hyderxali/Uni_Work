#include<iostream>
using namespace std;
int main(){
	int length;
	cout<<"Enter length : ";
	cin>>length;
for(int i=0;i<length;i++){
	for(int k=length;k>i;k--){
		cout<<" ";
	}
	for(int j=0;j<i;j++){
		cout<<"@ ";
	}
	cout<<endl;
}
return 0;
}

