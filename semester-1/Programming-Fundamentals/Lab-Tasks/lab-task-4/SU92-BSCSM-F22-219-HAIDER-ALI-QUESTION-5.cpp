#include <iostream>
using namespace std;
int main(){
	char alpha;
	cout<<"Enter a character : ";
	cin>>alpha;
	if(alpha>='0'&&alpha<='9'){
		cout<<"Entered character is Number";
	}
	else if(alpha>='a'&&alpha<='z'){
		cout<<"Entered character is lowercase";
	}
	else if(alpha>='A'&&alpha<='Z'){
		cout<<"Entered character is upercase";
	}
	else{
		cout<<"Entered character is special character";
	}

return 0;
}

