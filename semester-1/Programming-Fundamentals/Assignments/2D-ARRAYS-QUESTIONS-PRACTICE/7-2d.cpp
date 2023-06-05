#include<iostream>
using namespace std;
int main(){
int arr[2][2];
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<"Enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>arr[i][j];
	}
}
int sum=0;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		if(i==j){
			sum+=arr[i][j];
		}
	}
}
cout<<"Matrix : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}

cout<<"sum of diagonal elements is : "<<sum;
return 0;
}

