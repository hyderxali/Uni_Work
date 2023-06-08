#include<iostream>
using namespace std;
int main()
{
    int i,n,r,s=0;
     
    cout<<"\n Enter The Number:";
    cin>>n;
     
    for(i=n;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
    if(s==n)
    {
        cout<<n<<" is a Palindrome Number";
    }
    else
    {
        cout<<n<<" is a not Palindrome Number";
    }
}
