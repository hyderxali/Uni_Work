#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int max=arr[0];
int min=arr[0];

for(int i=1;i<5;i++){
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

