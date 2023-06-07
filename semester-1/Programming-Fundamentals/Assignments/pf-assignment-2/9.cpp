#include<iostream>
using namespace std;
int main(){
int pounds;
float bags_in_metric_ton;
cout<<"How many pounds of rice you can fit in bag : ";
cin>>pounds;
bags_in_metric_ton = 2205/pounds;
cout<<"You can store "<<bags_in_metric_ton<<" bags in a metric ton.";
return 0;
}

