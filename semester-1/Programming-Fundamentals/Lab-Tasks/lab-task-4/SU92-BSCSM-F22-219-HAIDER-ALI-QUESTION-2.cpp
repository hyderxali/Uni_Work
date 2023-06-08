#include <iostream>
using namespace std;
int main(){
	int x=10,y=15,z=20;
	if(!(x > 10)){
		cout<<"condition a is true"<<endl;
	}
	else{
		cout<<"condition a is false"<<endl;
	}
	if(x <= 5 || y < 15){
		cout<<"condition b is true"<<endl;
	}
	else{
		cout<<"condition b is false"<<endl;
	}
	if((x != 5) && (y != z)){
		cout<<"condition c is true"<<endl;
	}
	else{
		cout<<"condition c is false"<<endl;
	}
	if(x >= z || (x + y >= z)){
		cout<<"condition d is true"<<endl;
	}
	else{
		cout<<"condition d is false"<<endl;
	}
	if((x <= y - 2) && (y >= z) || (z - 2 != 20)){
		cout<<"condition e is true"<<endl;
	}
	else{
		cout<<"condition e is false";
	}
return 0;
}

