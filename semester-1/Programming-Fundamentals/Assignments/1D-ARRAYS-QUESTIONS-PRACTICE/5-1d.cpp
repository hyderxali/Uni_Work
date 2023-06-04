#include<iostream>
using namespace std;
int main(){
int arr[5] = {1,8,3,4,5},flag=0;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	if(arr[i]>arr[j]){
		flag++;
		if(flag==4){
			cout<<"second largest number is : "<<arr[i]<<" at index : "<<i<<endl;
			break;
		}
	}
}
}
return 0;
}

