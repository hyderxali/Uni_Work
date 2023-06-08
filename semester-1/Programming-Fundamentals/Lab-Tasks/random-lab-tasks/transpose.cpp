#include<iostream>
using namespace std;
int main(){
int a[3][3] , b[3][3] , c[3][3];
int sum=0;
//for input
for(int i=0;i<=2;i++){
	for(int j=0;j<=2;j++){
		cout<<"Enter A:"<<"["<<i<<"]"<<"["<<j<<"] : ";
		cin>>a[i][j];
	
	}
}
for(int i=0;i<=2;i++){
	for(int j=0;j<=2;j++){
		cout<<"Enter B:"<<"["<<i<<"]"<<"["<<j<<"] : ";
		cin>>b[i][j];
	}
}


//transpose process
int i,j,k;
for(k=0;k<3;k++){
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum += a[k][j]*b[j][i];
		}
	c[k][i]=sum;
	//cout<<sum<<"\t";
	}	
}
//for print transpose
for(int i=0;i<=2;i++){
	for(int j=0;j<=2;j++){
		cout<<c[i][j]<<"\t";
	}
	cout<<endl;
}
return 0;
}

