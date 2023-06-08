#include<iostream>
using namespace std;
int main(){
int arr[5][5],temp[5],sum,min,max;
string sub[5] = {"English" , "Math" , "Computer" , "Physics" , "Chemistry"};
float avg;
//max, min ,average of each student in each subject
for(int i=0;i<5;i++){
	sum = 0;
	temp[5]={0};
	for(int j=0;j<5;j++){
		cout<<"Enter "<<sub[j]<<" marks of student No. "<<i+1<<" : ";
		cin>>arr[i][j];
		sum+=arr[i][j];
		temp[j] = arr[i][j];
	}
	avg = (float)sum/5;
	cout<<"Result "<<i+1<<" :- "<<endl;
	cout<<"Average marks of student "<<i+1<<" is : "<<avg<<"%"<<endl;
	max=temp[0];
	min=temp[0];
	int flag ;
	for(int k=0;k<5;k++){
		if(temp[k]>=max){
			max = temp[k];
			flag=k;
		}
	}
	cout<<"Maximum number is in "<<sub[flag]<<" : "<<max<<endl;
	for(int l=0;l<5;l++){
		if(temp[l]<=min){
			min = temp[l];
			flag=l;
		}

	}
	cout<<"Minimum number is in "<<sub[flag]<<" : "<<min<<endl;
	
	
}
//for printing table
//cout<<"Result Table :- \n";
//	cout<<"Student/Subject  ";
//	for(int o=0; o<5; o++){
//		cout<<sub[o]<<"  ";
//	}
//	cout<<endl;
//	for(int m=0; m<5; m++){
//		cout<<"\t"<<m+1<<"\t ";
//		for(int n=0; n<5; n++){
//			cout<<arr[m][n]<<"\t ";
//		}
//		cout<<endl;
//	}

return 0;
}

