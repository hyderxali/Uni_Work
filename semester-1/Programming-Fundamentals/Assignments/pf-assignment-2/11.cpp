#include<iostream>
using namespace std;
int main(){
float netBalance,payment,averageDailyBalance,interest;
int d1,d2;
cout<<"Enter the net balance : ";
cin>>netBalance;
cout<<"Enter the payment : ";
cin>>payment;
cout<<"Enter the number of days in the billing cycle : ";
cin>>d1;
cout<<"Enter the number of days payment is made before billing cycle : ";
cin>>d2;
averageDailyBalance = (netBalance*d1-payment*d2)/d1;
interest = averageDailyBalance * 0.0152;
cout<<"The interest : "<<interest;

return 0;
}

