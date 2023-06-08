#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter length : ";
cin>> n;
   for(int i=n; i>=1; i--)
   {
      for(int k=n; k>i;  k--)
      {
         cout<<" ";
       }
      for(int j=1; j<=i; j++)
      {
cout<<"*";
      }
cout<<endl;
   }
return 0;
}

