#include<iostream>
using namespace std;
int main(){
int arr[2][3] = {{1,8,3},{4,5,0}};
int max=arr[0][0];
int min=arr[0][0];
int temp=0;
for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
	if(max<arr[i][j]){
		temp = max;
		max= arr[i][j];
		arr[i][j] = temp;
	}
	if(min>arr[i][j]){
		temp = min;
		min = arr[i][j];
		arr[i][j] = temp;
	}
	}
}
cout<<"Max is : "<<max<<endl;
cout<<"Min is : "<<min;
return 0;
}

