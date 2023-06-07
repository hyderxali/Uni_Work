#include<iostream>

using namespace std;

int main()

{

float salary,bonus;

int grade;

cout<<"Enter salary of Employee :$";

cin>>salary;

cout<<"Enter grade :";

cin>>grade;

if(grade>15)

bonus = salary * 50.0/100.0;

else

bonus = salary * 25.0/100.0;

salary = salary + bonus;

cout<<"The Total salary of Employee :$"<<salary;

return 0;

}
