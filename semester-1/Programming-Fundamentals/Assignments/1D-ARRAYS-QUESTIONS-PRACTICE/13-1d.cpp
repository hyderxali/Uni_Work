#include<iostream>
using namespace std;
int main(){
int arr[10];
for(int i=0;i<10;i++){
	cout<<"Enter number "<<i+1<<" : ";
	cin>>arr[i];
}
int max=arr[0];
int min=arr[0];

for(int i=1;i<10;i++){
	if(max<arr[i]){
		max = arr[i];
	}
	if(min>arr[i]){
		min=arr[i];
	}
}
cout<<"max : "<<max<<endl;
cout<<"min : "<<min<<endl;

return 0;
}

