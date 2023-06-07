#include<iostream>
using namespace std;
int main(){
	double grossIncome,netIncome,hours,payperhour,tax=0.14; 
	double schoolExpense,bondsExpense,clothesExpense,parentsBondsExpense;
	const float clothes=0.10,school=0.01,bonds=0.25,parents=0.50;
		cout<<"How many hours did you work per day : ";
	cin>>hours;
		cout<<"What was your pay per hour : ";
	cin>>payperhour;
	grossIncome=hours*payperhour*35;	//because he worked five weeks = 35 days
		cout << "Gross Income: $" << grossIncome << endl;
	tax*=grossIncome;
		cout << "Tax on Gross Income: $"<<tax<<endl;
	netIncome=grossIncome-tax;
	cout << "Net Income: $" << netIncome << endl;
	schoolExpense = netIncome*school;
		cout << "Expense on School Supplies: $" << schoolExpense << endl;
	clothesExpense = netIncome*clothes;
		cout << "Expense on clothes Supplies: $" << clothesExpense << endl;
	netIncome-=schoolExpense+clothesExpense;	//after school and clothes expenses netIncome left
	bondsExpense = netIncome*bonds;
    	cout << "Expense on Savings Bonds: $" << bondsExpense << endl;
	parentsBondsExpense = bondsExpense*parents;
		cout << "Parents Bonds Co-Contribution: $" <<parentsBondsExpense << endl;

    
return 0;
}

