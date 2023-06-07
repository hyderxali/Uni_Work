#include<iostream>
using namespace std;


int is_Multiple(int n1, int n2)
{
    return n1 % n2 == 0;
}
int main()
{
    int n1, n2;
   
    cout<<"Input the first integer : ";
    cin>>n1;
    cout<<"Input the second integer: ";
    cin>>n2;

    if(is_Multiple(n1, n2))
        cout<<n1<<" is a multiple of "<<n2;
    else
        cout<<n1<<" is not a multiple of "<<n2;

    return 0;
}

