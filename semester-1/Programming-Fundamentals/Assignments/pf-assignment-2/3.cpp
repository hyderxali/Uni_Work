#include<iostream>
#include <iomanip>
using namespace std;
int main(){
int gallons;
float cubicfeet;
cout<<"Enter Number of gallons : ";
cin>>gallons;
cubicfeet=gallons/7.481;
cout<<"Cubic Feet : "<<setprecision(3)<<cubicfeet;
return 0;
}

