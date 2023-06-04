#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int num, flag=0;
cout<<"Enter number for search : ";
cin>>num;
int i;
for(i=0;i<5;i++){
	if(arr[i]==num){
		flag=1;
		break;
	}
}
if(flag==1){
	cout<<"number was found at index : "<<i;
}
else{
	cout<<"number was not found";
}
return 0;
}

