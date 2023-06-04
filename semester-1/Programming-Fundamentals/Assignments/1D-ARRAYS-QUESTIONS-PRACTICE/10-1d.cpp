#include<iostream>
using namespace std;
int main(){
int day,month,total=0;
cout<<"Enter month : ";
cin>>month;
cout<<"Enter day : ";
cin>>day;
for(int i=1;i<month;i++){
	if(month==1){
	cout<<day<<" days";
	break;
}
if(i<8){
	if(i%2==0){
		if(i==2){
			total+=28;
		}
		else{
			total+=30;
		}
	}
	else{
		total+=31;
	}
}
else if(i%2==1){
	total+=31;
}
else{
	total+=30;
}

}
cout<<"Total days spent : "<<total+day;
return 0;
}

