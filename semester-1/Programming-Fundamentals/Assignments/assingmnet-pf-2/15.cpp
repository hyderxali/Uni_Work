#include<iostream>
#include<iomanip>
using namespace std;
int main(){
string ch[26]={"B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
int length;
cout<<"Note:Your length should be less than 27"<<endl;
cout<<"Enter Length : ";
cin>>length;
if(length>0&&length<27){
	cout<<setw(length+2)<<"A"<<endl;
	cout<<setw(length+3)<<"A A"<<endl;
	for(int i=0;i<length;i++){
		for(int k=length-1;k>i;k--){
			cout<<" ";
		}
		
		cout<<"A ";
		for(int j=0;j<=i;j++){
			cout<<ch[j]<<" ";
		}
		cout<<"A";
		cout<<endl;
	}
}
else{
	cout<<"Error:Invalid length";
}
return 0;
}

