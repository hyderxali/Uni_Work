#include<iostream>
using namespace std;
int main(){
int arr[5],temp;
for(int i=0;i<5;i++){
	cout<<"Enter value no "<<i+1<<" : ";
	cin>>arr[i];
}
for(int j=1;j<5;j++){
	for(int i=0;i<5-j;i++){
		if(arr[i+1]<arr[i]){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		}
	}
	for(int i=0;i<5;i++){
	cout<<arr[i]<<"\t";
	}
	cout<<endl;
}

return 0;
}

