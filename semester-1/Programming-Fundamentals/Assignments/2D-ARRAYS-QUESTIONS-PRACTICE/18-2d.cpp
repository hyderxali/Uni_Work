#include<iostream>
using namespace std;
int main(){
string arr[13][6];
cout<<"* repersents free X represents occupied "<<endl;
for(int i=0;i<13;i++){
	for(int j=0;j<6;j++){
		arr[i][j] = "*";
	}
}
cout<<"\t1\t2\t3\t4\t5\t6"<<endl;
for(int i=0;i<13;i++){
	cout<<"Row "<<i+1;
	for(int j=0;j<6;j++){
		cout<<"\t"<<arr[i][j];
	}
	cout<<endl;
}
int endOrNot;
do{	
int choice,x,y,seat[x][y];
cout<<"Row 1-2 First Class"<<endl;
cout<<"Row 3-7 Bussiness Class"<<endl;
cout<<"Row 8-13 Economy Class"<<endl;

cout<<"Enter you ticket type no. : "<<endl;
cout<<"1 : first class"<<endl;
cout<<"2 : bussiness class"<<endl;
cout<<"3 : economy class"<<endl;
cin>>choice;
cout<<"Enter Seat row : ";
cin>>x;
cout<<"Enter Seat column : ";
cin>>y;
if(choice==1){
	if(x<3){
	arr[x-1][y-1] = "X";
}
else{
	cout<<"you've selected the seat of wrong class"<<endl;
}
}

if(choice==2){
	if(x>=3&&x<=7){
	arr[x-1][y-1] = "X";
}
else{
	cout<<"you've selected the seat of wrong class"<<endl;
}
}

if(choice==3){
	if(x>=8&&x<=13){
	arr[x-1][y-1] = "X";
}
else{
	cout<<"you've selected the seat of wrong class"<<endl;
}
}
cout<<"\t1\t2\t3\t4\t5\t6"<<endl;
for(int i=0;i<13;i++){
	cout<<"Row "<<i+1;
	for(int j=0;j<6;j++){
		cout<<"\t"<<arr[i][j];
	}
	cout<<endl;
}
cout<<"Do you want to end the program? : "<<endl;
cout<<"1 : yes"<<endl<<"0 : no"<<endl;
cin>>endOrNot;
}
while(endOrNot!=1);


return 0;
}

