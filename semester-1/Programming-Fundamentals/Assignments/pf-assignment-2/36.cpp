#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "Enter a number: ";
    cin >> no;

    if (no % 5 == 0)
    {
        cout << "It is divisible by 5." << endl;
    }
    if(no % 11 == 0)
    {
        cout << "It is divisible by 11." << endl;
    }
    if((no % 5 == 0)&&(no % 11 == 0)){
    	 cout << "It is divisible by 5 and 11." << endl;
	}
	 if((no % 5 != 0)&&(no % 11 == 0)){
    	 cout << "It is not divisible by 5 but divisible by 11." << endl;
	}
	 if((no % 5 == 0)&&(no % 11 != 0)){
    	 cout << "It is divisible by 5 but not divisable by 11." << endl;
	}
	if ((no % 5 != 0)&&(no % 11 != 0))
	{
		cout << "It is nor divisible by 5 nighter by 11." << endl;
	}
	return 1;
}
