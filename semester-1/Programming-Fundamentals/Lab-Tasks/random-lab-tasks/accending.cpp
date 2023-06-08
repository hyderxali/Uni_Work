#include<iostream>
using namespace std;
int main(){
int arr[5] = {1,3,6,2,8};
int c =0;
for(int j=0;j<5;j++){
	for(int i =0 ;i<4;i++){
	if(arr[i]<arr[i+1]){
		c=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=c;
	}
}
}

for(int i =0 ;i<5;i++){
	cout<<arr[i]<<endl;
}
return 0;
}

