#include<iostream>
using namespace std;
int main(){
float british_pound = 1.487, french_franc = 0.172 , german_duetschemark = 0.584 , japanese_yen = 0.00955;
float dollars;
cout<<"Enter dollars : ";
cin>>dollars;
cout<<"In british pound : "<<dollars*british_pound<<endl;
cout<<"In french frac : "<<dollars*french_franc<<endl;
cout<<"In german duetschemark : "<<dollars*german_duetschemark<<endl;
cout<<"In japanese yen : "<<dollars*japanese_yen;
return 0;
}

