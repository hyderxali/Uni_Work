#include<iostream>
using namespace std;
int main(){
	int n;float sum=0;
cout<<"Harmonic series : 1  1/2  1/3  1/4 .....  1/n"<<endl;
cout<<"Enter nth number to find the series and its sum"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
	if(i==1){
		cout<<"1\t";
	}
	cout<<"1"<<"/"<<i<<"\t";
	sum += 1/(float)i;
}
cout<<"\nsum : "<<sum;
return 0;
}

