#include<iostream>
using namespace std;
int main(){
int arr[3][3];
cout<<"Enter matrix : "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>arr[i][j];
	}
}
cout<<"Before transpose : "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}
cout<<"After transpose : "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<arr[j][i]<<"\t";
	}
	cout<<endl;
}

return 0;
}

