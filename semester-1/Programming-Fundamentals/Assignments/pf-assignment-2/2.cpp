#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int english,math,computer,physics,chemistry,total_obt;
int engmax,mathmax,compmax,phymax,chemistrymax,total_max;
float percentage;
cout<<"Enter English Max marks : ";
cin>>engmax;
cout<<"Enter English obtained marks : ";
cin>>english;
cout<<"Enter Math Max marks : ";
cin>>mathmax;
cout<<"Enter Math obtained marks : ";
cin>>math;
cout<<"Enter Computer Max Marks : ";
cin>>compmax;
cout<<"Enter Computer obtianed marks : ";
cin>>computer;
cout<<"Enter Physics Marks : ";
cin>>phymax;
cout<<"Enter Physics obtained marks : ";
cin>>physics;
cout<<"Enter chemistry Max marks : ";
cin>>chemistrymax;
cout<<"Enter chemistry obtained marks : ";
cin>>chemistry;
total_max=engmax+mathmax+compmax+phymax+chemistrymax;
total_obt=english+math+computer+physics+chemistry;
if(!(total_max<=total_obt)){
	percentage=((float)total_obt/(float)total_max)*100;
	cout<<"****************************************************************\n";
	cout<<"* Subjects "<<setw(23)<<"Max. Marks"<<setw(31)<<"Obtained Marks *\n";
	cout<<"****************************************************************\n";
	cout<<"* English  "<<setw(19)<<engmax<<setw(27)<<english<<setw(7)<<"*"<<endl;
	cout<<"* Math	   "<<setw(19)<<mathmax<<setw(27)<<math<<setw(7)<<"*"<<endl;
	cout<<"* Computer "<<setw(19)<<compmax<<setw(27)<<computer<<setw(7)<<"*"<<endl;
	cout<<"* Physics  "<<setw(19)<<phymax<<setw(27)<<physics<<setw(7)<<"*"<<endl;
	cout<<"* Chemistry"<<setw(19)<<chemistrymax<<setw(27)<<chemistry<<setw(7)<<"*"<<endl;
	cout<<"****************************************************************\n";
	cout<<"* Max-Total"<<setw(19)<<total_max<<setw(20)<<"Obtained Marks"<<setw(7)<<total_obt<<setw(7)<<"*"<<endl;
	cout<<"****************************************************************\n";
	cout<<setw(47)<<"percentage"<<setw(10)<<percentage<<"%"<<setw(6)<<"*"<<endl;
	cout<<"****************************************************************\n";	
}
else{
	cout<<"Invalid Numbers entered";
}
return 0;
}

