#include<iostream>
using namespace std;
int main(){
int arr[5][5],sum;
for(int i=0;i<5;i++){
	sum=0;
	for(int j=0;j<5;j++){
		cout<<"Enter value of row "<<i+1<<" column "<<j+1<<" : ";
		cin>>arr[i][j];
		sum+=arr[i][j];
	}
	cout<<"sum of row "<<i+1<<" is : "<<sum<<endl;
}

return 0;
}

