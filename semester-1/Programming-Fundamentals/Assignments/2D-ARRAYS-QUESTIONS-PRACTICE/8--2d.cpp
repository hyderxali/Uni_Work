#include<iostream>
using namespace std;
int main(){
int arr[2][2]={{1,2},{3,4}};
int num,flag=0;
cout<<"Enter the number you want to search : ";
cin>>num;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}
int i,j;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		if(num==arr[i][j]){
			flag=1; 
			cout<<num<<" was found at index "<<"["<<i<<"]"<<"["<<j<<"]";
			break;
		}
	}
}
if(flag==0){
	cout<<num<<" was not found!";
}

return 0;
}

