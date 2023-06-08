#include<iostream>
#include<stdlib.h>
using namespace std;
int flip(void);
int main(){
	int heads=0,tails=0;
	for(int i=1;i<=100;i++){
		cout<<flip()<<endl;
		if(flip()==0){
			tails++;
		}
		else{
			heads++;
		}
	}
	cout<<"Total heads : "<<heads<<endl;
	cout<<"Total tails : "<<tails<<endl;
return 0;
}
int flip(){
	return rand()%2;
}

