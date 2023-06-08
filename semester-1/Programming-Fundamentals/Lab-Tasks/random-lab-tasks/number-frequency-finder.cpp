#include<iostream>
using namespace std;
int main(){
int length,frequency=0;
cout<<"How many numbers you want to enter : ";
cin>>length;
int arr[length];
for(int i=0 ;i<length ; i++){
	cout<<"Enter the value of number "<<i+1<<endl;
	cin>>arr[i];
}

int i , j;
int flag[length] = {0};
for(i=0 ; i<length; i++){
	frequency=0;
	if(flag[i]!=1){
		for(j = 0 ; j<length ; j++){
		if(arr[i] == arr[j]){
		frequency++;
		flag[j] = 1;
		}	
	}	
	cout<<arr[i]<<"-->"<<frequency<<endl;	
	}
}	

return 0;
}

