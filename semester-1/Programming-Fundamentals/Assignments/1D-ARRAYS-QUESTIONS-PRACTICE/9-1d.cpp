#include<iostream>
using namespace std;
int main(){
int arr[5];
int sum=0;
for(int i=0;i<5;i++){
	cout<<"Enter Number "<<i+1<<" : ";
	cin>>arr[i];
}
for(int i=0;i<5;i++){
	sum+=arr[i];
}
cout<<"Sum : "<<sum<<endl;
cout<<"average : "<<(float)sum/5<<"%";
return 0;
}

