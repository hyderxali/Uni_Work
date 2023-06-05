#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x,y,sum=0;
	cout<<"enter number of rows : ";
	cin>>x;
	cout<<"enter number of column : ";
	cin>>y;
	
int arr[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<"Enter row "<<i+1<<" column "<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix A :"<<setw(25)<<"Row Sum : "<<endl;
for(int i=0;i<x;i++){
	sum=0;
	for(int j=0;j<y;j++){
		cout<<setw(15)<<arr[i][j]<<"\t";
		sum+=arr[i][j];
	}
	cout<<setw(5)<<sum;
	cout<<endl;
}
cout<<"column sum : ";
for(int i=0;i<x;i++){
	sum=0;
	for(int j=0;j<y;j++){
		sum+=arr[j][i];
	}
	cout<<sum<<"\t\t\t";
}

return 0;
}

