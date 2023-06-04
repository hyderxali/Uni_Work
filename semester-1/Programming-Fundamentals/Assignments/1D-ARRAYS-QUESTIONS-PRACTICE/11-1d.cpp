#include<iostream>
using namespace std;
int main(){
int arr[5],total=0;
for(int i=0;i<5;i++){
	cout<<"Enter age of "<<i+1<<" : ";
	cin>>arr[i];
}
for(int i=0;i<5;i++){
	if(arr[i]>50&&arr[i]<60){
		total++;
	}
}
cout<<"Total number of people in the age group of 50-60 are : "<<total;
return 0;
}

