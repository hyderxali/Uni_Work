#include<iostream>
using namespace std;
int main()
{int salary,s;
cout<<"What is Your Salary: ";
cin>> s;
if(s>=50000)
{
salary=(s*0.05);}
s=s-salary;
cout<<"Net salary is: "<<s;
return 0;
}

