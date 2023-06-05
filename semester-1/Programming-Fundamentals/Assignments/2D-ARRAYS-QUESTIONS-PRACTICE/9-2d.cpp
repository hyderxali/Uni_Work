#include<iostream>
using namespace std;
int main(){
int a[2][2],b[2][2],c[2][2];
cout<<"Enter first matrix : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<"Enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>a[i][j];
	}
}
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}
cout<<"Enter Second matrix : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<"Enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>b[i][j];
	}
}
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<b[i][j]<<"\t";
	}
	cout<<endl;
}
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		c[i][j] = a[i][j]+b[i][j];
	}
}
cout<<"Result matrix : "<<endl;
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<c[i][j]<<"\t";
	}
	cout<<endl;
}





return 0;
}

