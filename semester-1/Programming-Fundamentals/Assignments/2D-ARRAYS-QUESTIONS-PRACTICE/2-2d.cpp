#include<iostream>
using namespace std;
const int column = 5;
void printArray(int arr[][column] , int length){
		for(int i=0;i<length;i++){
	for(int j=0;j<5;j++){
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}
}
int main(){
int rows;
cout<<"Enter number of rows : ";
cin>>rows;
int arr[rows][5];
for(int i=0;i<rows;i++){
	for(int j=0;j<5;j++){
		cout<<"Enter value of row "<<i+1<<" column "<<j+1<<" : ";
		cin>>arr[i][j];
	}
}
printArray(arr,rows);
return 0;
}

