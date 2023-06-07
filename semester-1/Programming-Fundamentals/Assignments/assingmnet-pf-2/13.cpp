#include<iostream>
using namespace std;
int main(){
int fac,n;
int num;
do{
cout<<"Enter number : ";
cin>>n;
fac=1;
for(int i=1;i<=n;i++){
	fac = fac * i;
}
cout<<"factorail is : "<<fac<<endl;
cout<<"Enter 0 to end the program : ";
cin>>num;
}while(num!=0);

return 0;
}

