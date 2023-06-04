#include<iostream>
using namespace std;
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int start=0,end = sizeof(arr)/sizeof(arr[0])-1,num,mid,loc=-1;
cout<<"Enter the number you want to search : ";
cin>>num;
while(start<=end){
	mid = (start+end)/2;
	if(arr[mid]==num){
		loc=mid;
		break;
	}
	else if(num<arr[mid]){
	end = mid - 1;
	}
	else{
		start = mid + 1;
	}
}
	if(loc==-1){
		cout<<num<<" was not found!";
	}
	else{
		cout<<num<<" was found at index : "<<loc;
	}
return 0;
}

