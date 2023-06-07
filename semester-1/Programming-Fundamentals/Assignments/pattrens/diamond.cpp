#include <iostream>
using namespace std;
int main(){
int length;
cout<<"Enter length : ";
cin>>length;
for(int i=1;i<=length;i++){
	for(int j=i;j<=length;j++){
		cout<<" ";
	}
	for(int j=i;j<=(2*i)-1;j++){
		cout<<"*";
	}
	cout<<endl;
}

return 0;
}

