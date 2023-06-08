#include<iostream>
using namespace std;
int main(){
int arr[4][4],sum=0;
float avg=0;
string stu[4] = {"Hannan" , "Zubair" , "Haider" , "Sibtain"};
string sub[4] = {"English" , "Urdu" , "Math" , "Science"};
for(int i=0 ; i<4 ; i++){
	avg=0;
	sum=0;
	cout<<"Enter marks of "<<sub[i]<<endl;
	for(int j=0;j<4;j++){
		cout<<stu[j]<<"'s"<<" : ";
		cin>>arr[i][j];
		sum+=arr[i][j];
	}
	avg =(float)sum/4;
	cout<<sub[i]<<"'s Result :-"<<endl;
	cout<<"Sum : "<<sum<<endl;
	cout<<"Average "<<avg<<"%"<<endl;
	cout<<"-----------------------------"<<endl;
}
return 0;
}

