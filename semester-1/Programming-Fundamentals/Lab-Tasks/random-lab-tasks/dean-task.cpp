#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void menu();
struct student{
	int choice,rollno;
	string name , fathername , address , dob , cellphone;
};
void printData(student s);
student getData(student s);
int main(){
student s,s1;
menu();
cout<<"Enter Your choice : ";
cin>>s.choice;
if(s.choice==1){
	s1=getData(s);
}
//else if(s.choice==2){
//	
//}
printData(s1);
return 0;
}
void menu(){
cout<<"\t\t\t\t\tWhat do you want to do?"<<endl;
cout<<"\t\t\t\t\t-----------------------"<<endl;
cout<<"\t\t\t\t\t1-Add student"<<endl;
cout<<"\t\t\t\t\t2-Edit student"<<endl;
cout<<"\t\t\t\t\t3-Search student"<<endl;
cout<<"\t\t\t\t\t4-Quit Program"<<endl;
cout<<"\t\t\t\t\t-----------------------"<<endl;
}
student getData(student s){
	
		cout<<"Enter student name : ";
		cin.ignore();
		getline(cin, s.name);		
		cout<<"Enter student's father name : ";
		getline(cin, s.fathername);
		cout<<"Input student roll number in format(1XXX) : ";
		cin>>s.rollno;;
		cout<<"Enter student's cell phone number : ";
		cin>>s.cellphone;
		cout<<"Enter student's date of Birth(dd/mm/yyyy) : ";
		cin.ignore();
		getline(cin , s.dob);
		cout<<"Enter student's address : ";
		getline(cin,s.address);
		return s;
	}
void printData(student s){
	cout<<"\t\t------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t-----------------------------------Student Record Table-----------------------------------"<<endl;
	cout<<"\t\t------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\tRoll no"<<"\t\tName"<<"\t\tFather Name"<<"\t\tPhone No."<<"\t\tDOB"<<"\t\tAddress"<<endl;
	cout<<"\t\t"<<setw(4)<<s.rollno<<setw(20)<<s.name<<setw(20)<<s.fathername<<setw(12)<<s.cellphone<<setw(9)<<s.dob<<setw(7)<<s.address<<endl;
	cout<<"Student
	cout<<"\t\t------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t------------------------------------------FINISH------------------------------------------"<<endl;
	cout<<"\t\t------------------------------------------------------------------------------------------"<<endl;
	
}

