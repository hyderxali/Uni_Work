#include<iostream>
using namespace std;

int main()
{

    int p, c, m, t, mp;

    cout << "Eligibility Criteria for an engineering:" <<endl;
    cout << "Marks in Mathematics >= 65" <<endl;
    cout << "Marks in Physics >= 55" <<endl;
    cout << "Marks in Chemestry >= 50" <<endl;
    cout << "-------------------------------------" <<endl;

    cout << "Input the marks obtained in Physics :" <<endl;
    cin >> p;
    cout << "Input the marks obtained in Chemistry :" <<endl;
    cin >> c;
    cout << "Input the marks obtained in Mathematics :" <<endl;
    cin >> m;
    

    if (m>=65)
        if(p>=55)
            if(c>=50)
				cout << "The  candidate is eligible for admission." <<endl;
			else
					cout<<" Candidate is not eligible.";
		else
					cout<<" Candidate is not eligible.";
	else
					cout<<" Candidate is not eligible.";
			
 return 0;
}
