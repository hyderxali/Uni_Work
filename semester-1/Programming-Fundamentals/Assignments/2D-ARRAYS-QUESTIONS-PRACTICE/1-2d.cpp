#include<iostream>
using namespace std;
int main(){
double doubleArray[2][5];
for(int i=0;i<2;i++){
	for(int j=0;j<5;j++){
		cout<<"Enter value of row "<<i+1<<" column "<<j+1<<" : ";
		cin>>doubleArray[i][j];
	}
}
for(int i=0;i<2;i++){
	for(int j=0;j<5;j++){
		cout<<"Value of row "<<i+1<<" column "<<j+1<<" : "<<doubleArray[i][j]<<endl;
	}
}

return 0;
}

