#include <iostream>
using namespace std;

int main() {

  int num,r,sum=0,t;

  cout << "Enter an integer: ";
  cin >> num;

  for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
  }

  cout << "Reversed Number = " << sum;

  return 0;
}


    


