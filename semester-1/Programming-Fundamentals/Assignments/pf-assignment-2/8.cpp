#include<iostream>
using namespace std;
int main(){
float mass_1,mass_2,distance;
cout<<"Enter mass of first body : ";
cin>>mass_1;
cout<<"Enter mass of second body : ";
cin>>mass_2;
cout<<"Enter distance between bodies : ";
cin>>distance;
double force = 0.0000000667*((mass_1*mass_2)/distance*distance);
cout<<"Force between two bodies is : "<<force;

return 0;
}

