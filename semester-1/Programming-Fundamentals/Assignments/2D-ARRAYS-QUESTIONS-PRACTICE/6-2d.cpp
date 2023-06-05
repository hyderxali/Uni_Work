#include<iostream>
using namespace std;
int main(){
int a[2][2],b[2][2],c[2][2];
cout<<"Enter first matrix : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<"enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>a[i][j];
	}
}
cout<<"Enter second matrix : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<"enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>b[i][j];
	}
}
int j,sum=0;
for(int k=0;k<2;k++){
	for(int i=0;i<2;i++){
		sum=0;
	for(j=0;j<2;j++){
		sum+= a[k][j]*b[j][i];
	}
	c[k][i]=sum;
}
}
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<c[i][j]<<"\t";
	}
	cout<<endl;
}
return 0;
}

