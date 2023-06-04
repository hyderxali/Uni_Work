#include<iostream>
using namespace std;
int main(){
int arr[5];
for(int i=0;i<5;i++){
	cout<<"Enter Number "<<i+1<<" : ";
	cin>>arr[i];
}
for(int i=4;i>=0;i--){
	cout<<arr[i]<<endl;
}
return 0;
}

