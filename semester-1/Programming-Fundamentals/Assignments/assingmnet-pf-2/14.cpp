#include<iostream>
using namespace std;
int main(){
string ch[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
int length;
cout<<"Note:Your length should be less than 27"<<endl;
cout<<"Enter Length : ";
cin>>length;
if(length>0&&length<27){
	for(int i=0;i<length;i++){
		for(int k=length-1;k>i;k--){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<ch[j];
		}
		cout<<endl;
	}
}
else{
	cout<<"Error:Invalid length";
}
return 0;
}

