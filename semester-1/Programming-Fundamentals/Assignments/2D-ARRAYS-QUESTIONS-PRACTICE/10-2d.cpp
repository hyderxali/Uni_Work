#include<iostream>
using namespace std;
int main(){
int arr[2][4];
for(int i=0;i<2;i++){
	for(int j=0;j<4;j++){
		cout<<"Enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>arr[i][j];
	}
}
for(int i=0;i<2;i++){
	for(int j=0;j<4;j++){
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}

return 0;
}

