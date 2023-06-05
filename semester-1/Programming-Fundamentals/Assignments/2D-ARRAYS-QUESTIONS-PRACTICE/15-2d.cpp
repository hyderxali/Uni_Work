#include<iostream>
using namespace std;
int main(){
int arr[5][5],row,column;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cout<<"Enter marks of student "<<j+1<<" in row "<<i+1<<" : ";
		cin>>arr[i][j];
	}
}
cout<<"Enter the row number  : ";
cin>>row;
cout<<"Enter the column number : ";
cin>>column;
cout<<"The marks of student is "<<arr[row-1][column-1];
return 0;
}

