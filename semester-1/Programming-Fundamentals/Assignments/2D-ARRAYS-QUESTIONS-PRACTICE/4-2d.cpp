#include<iostream>
using namespace std;
int main(){
int arr[2][2];
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<"Enter "<<i+1<<" row "<<j+1<<" column ";
		cin>>arr[i][j];
	}
}
cout<<"before transpose : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}
cout<<"After transpose : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<arr[j][i]<<"\t";
	}
	cout<<endl;
}


return 0;
}

