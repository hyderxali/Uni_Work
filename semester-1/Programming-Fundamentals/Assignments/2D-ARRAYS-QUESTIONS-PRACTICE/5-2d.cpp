#include<iostream>
using namespace std;
int main(){
int arr[5][5],sum;
for(int i=0;i<5;i++){
	sum=0;
	for(int j=0;j<5;j++){
		cout<<"Enter value of column "<<j+1<<" row "<<i+1<<" : ";
		cin>>arr[j][i];
		sum+=arr[j][i];
	}
	cout<<"sum of column "<<i+1<<" is : "<<sum<<endl;
}

return 0;
}

