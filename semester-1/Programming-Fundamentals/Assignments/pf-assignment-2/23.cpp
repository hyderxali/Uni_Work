#include<iostream>
using namespace std;
int main(){
int upc,even_positions=0,odd_positions=0,result=0,remainder=0,remainder_2=0,flag=1,validOrNot=0;
cout<<"Enter Universal Product Code : ";
cin>>upc;
	while (upc > 0) {
		result = result * 10 + upc % 10;
		upc /= 10;
	}

	while(result > 0){
		 remainder = remainder * 10 + result%10;
		 result/=10;
//		 cout<<"remainder 1 : "<<remainder<<endl;
		 if(flag%2==0){
			even_positions += remainder%10;
//			cout<<"even Positions : "<<even_positions<<endl;
		}
		else{
			odd_positions += remainder%10;
//			cout<<"odd Positions : "<<odd_positions<<endl;
		}
		flag++;
	}
	validOrNot=even_positions+(3*odd_positions);
	cout<<validOrNot<<endl;
	if((validOrNot)%10==0){
		cout<<"Code is Valid";
	}
	else{
		cout<<"Code is invalid";
	}
return 0;
}

