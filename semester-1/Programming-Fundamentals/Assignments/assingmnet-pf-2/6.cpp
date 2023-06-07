#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int guess,counter=3;
	cout<<"Total chance : 3"<<endl;
	cout<<"Guess a number from 1 to 10"<<endl;
srand(time(0));
int num = (rand()%10)+1;
while(counter>0){
	cout<<"Guess#"<<4-counter<<" : ";
	cin>>guess;
	if(guess>10||guess<1){
	cout<<"please enter a number with the provided range";
	exit(0);
}
if(guess>num){
	cout<<"too high"<<endl;
}
else if(guess<num){
	cout<<"too low"<<endl;
}
else{
	cout<<"Right Guess!!";
	exit(0);
}
	counter--;
	cout<<"Remaining chances : "<<counter<<endl;

}
cout<<"You have lost the game the number was : "<<num;
return 0;
}

