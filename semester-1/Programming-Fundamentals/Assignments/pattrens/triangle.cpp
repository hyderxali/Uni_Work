#include <iostream>
using namespace std;
int main(){
int length;
cout<<"Enter length: ";
cin>>length;
for(int i=1;i<=length;i++){
	//{first inner loop for printing spaces
	for(int j=i;j<length;j++){
		cout<<" ";
	}
	//first inner loop for printing spaces}
	for(int k=1;k<=2*i-1;k++){
		cout<<"*";
	}
	cout<<endl;
}

return 0;
}

