#include<iostream>
#include<cmath>
using namespace std;
int fac(int);
int main(){
int series;
float sum;
cout<<"Enter nth number of series : ";
cin>>series;
cout<<"Series : "<<endl;
for(int i=1;i<=series;i++){
	cout<<pow(i,i)<<"/"<<fac(i)<<"\t";
	sum +=pow(i,i)/fac(i);
}
cout<<"\nsum : "<<sum;
return 0;
}
int fac(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac = fac * i;
	}
	return fac;
}

