#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName, test;
  int a;
  cout<<"Enter number: ";
  cin>>a;
  cout << "Type your full name: ";
  
  getline (cin, fullName);
  getline (cin, test);
  cout << "Your name is: " << fullName<<endl<<test;
  return 0;
}

