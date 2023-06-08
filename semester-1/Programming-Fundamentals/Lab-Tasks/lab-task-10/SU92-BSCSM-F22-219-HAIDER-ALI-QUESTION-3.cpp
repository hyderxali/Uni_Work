#include<iostream>
using namespace std;
int main(){
int one[3][3];
int two[3][3];
int result[3][3];
for(int i=0;i<3;i++){
	for(int j=0; j<3; j++){
		cout<<"Enter first matrix : "<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
		cin>>one[i][j];
	}
}
for(int i=0;i<3;i++){
	for(int j=0; j<3; j++){
		cout<<"Enter second matrix : "<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
		cin>>two[i][j];
	}
}
for(int i=0;i<3;i++){
	for(int j=0; j<3; j++){
		result[i][j] = one[i][j]+two[i][j];
	}
}
for(int i=0;i<3;i++){
	for(int j=0; j<3; j++){
	cout<<"Result : "<<"["<<i+1<<"]"<<"["<<j+1<<"] : "<<result[i][j]<<endl;
	}
}

return 0;
}

