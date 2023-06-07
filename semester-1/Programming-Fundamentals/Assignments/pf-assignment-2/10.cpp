#include<iostream>
using namespace std;
int main(){
	
float purchasing_price,selling_price,no_of_share_purchased,service_charges=0.015;
float tax,moneyIn,moneyOut,profit;
cout<<"Enter the purchasing price of 1 share : ";
cin>>purchasing_price;
cout<<"Enter the number of shares purchase : ";
cin>>no_of_share_purchased;
moneyIn= purchasing_price*no_of_share_purchased;
cout<<"The total money in the investment is : "<<moneyIn<<endl;
cout<<"tax taken while buying share : "<<moneyIn*service_charges<<endl;
cout<<"Enter the selling price of 1 share : ";
cin>>selling_price;
moneyOut = selling_price*no_of_share_purchased;
cout<<"The total money getting out of the investment is : "<<moneyOut<<endl;
cout<<"tax taken while selling share : "<<moneyOut*service_charges<<endl;
tax = (moneyIn*service_charges) + (moneyOut*service_charges);
cout<<"Total Service charges tax in investment : "<<tax<<endl;
profit = moneyOut-moneyIn;
if(profit<=0){
	cout<<"Loss you took excluding tax : "<<profit<<endl;
	profit = moneyOut-moneyIn-tax;
	cout<<"total Loss you took including tax : "<<profit;
	
}
else{
	cout<<"Profit you made excluding tax : "<<profit<<endl;
	profit = moneyOut-moneyIn-tax;
	cout<<"Profit you made including tax : "<<profit;
}

return 0;
}

