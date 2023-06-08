#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double sum = 0,pow=1;
    int num,i,j;
    cout << " Input the value for nth term: ";
    cin >> num;
    for (i = 1; i <= num; ++i) 
	{
		pow=1;
        for(j=1;j<=i;j++)
		{
        	pow=pow*2;
		}
		sum = sum + (1/pow);
    }    
    cout << " The sum of the above series is: " << sum << endl;
    return 0;
}

