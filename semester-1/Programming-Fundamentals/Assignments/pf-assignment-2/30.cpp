#include<iostream>
#include<string>
using namespace std;
int main(){
	int rollno,sub1,sub2,sub3,sum;
	float percentage;
	string name;
	string grade;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter roll no : ";
	cin>>rollno;
	cout<<"Please Enter Numbers out of 100 of Each subject"<<endl;
	cout<<"Enter marks of subject 1 : ";
	cin>>sub1;
	cout<<"Enter marks of subject 2 : ";
	cin>>sub2;
	cout<<"Enter marks of subject 3 : ";
	cin>>sub3;
	sum = sub1+sub2+sub3;
	percentage = ((float)sum/300)*100;
	if(percentage>80){
		grade = "A";
	}
	else if(percentage>=70&&percentage<80){
		grade = "B";
	}
	else if(percentage>=60&&percentage<70){
		grade = "C";
	}
	else if(percentage>=50&&percentage<60){
		grade = "D";
	}
	else if(percentage>=40&&percentage<50){
		grade = "E";
	}
	else{
		grade = "F";
	}
	cout<<name<<" you got : "<<sum<<" numbers with the percentage of "<<percentage<<" having grade "<<grade;
return 0;
}

