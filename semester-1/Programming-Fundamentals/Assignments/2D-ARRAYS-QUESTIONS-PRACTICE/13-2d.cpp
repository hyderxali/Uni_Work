#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter the number of rows : ";
	cin>>x;
	cout<<"Enter the number of column : ";
	cin>>y;
	
int a[x][y],b[x][y],c[x][y];
cout<<"Enter first matrix : "<<endl;
for(int i=0;i<x;i++){
	for(int j=0;j<y;j++){
		cout<<"Enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>a[i][j];
	}
}
for(int i=0;i<x;i++){
	for(int j=0;j<y;j++){
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}
cout<<"Enter Second matrix : "<<endl;
for(int i=0;i<x;i++){
	for(int j=0;j<y;j++){
		cout<<"Enter row "<<i+1<<" column "<<j+1<<" : ";
		cin>>b[i][j];
	}
}
for(int i=0;i<x;i++){
	for(int j=0;j<y;j++){
		cout<<b[i][j]<<"\t";
	}
	cout<<endl;
}
for(int i=0;i<x;i++){
	for(int j=0;j<y;j++){
		c[i][j] = a[i][j]+b[i][j];
	}
}
cout<<"Result matrix : "<<endl;
for(int i=0;i<x;i++){
	for(int j=0;j<y;j++){
		cout<<c[i][j]<<"\t";
	}
	cout<<endl;
}





return 0;
}

