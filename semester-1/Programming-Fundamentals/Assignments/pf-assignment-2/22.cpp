#include<iostream>
using namespace std;
int main()
{
    int num, n, r_num=0;

    cout<<"Enter a number: ";
    cin>>num;
    n = num;
    while(num!=0)
    {
        r_num = r_num * 10;

        r_num = num % 10 + r_num;

        num = num/10;
    }
    cout<<"Reversed Number is "<<r_num<<endl;

    if (n==r_num)
        cout<<"Input Number & Reversed Number are equal";
    else
        cout<<"Input Number & Reversed Number are not equal";

   return 0;
}
