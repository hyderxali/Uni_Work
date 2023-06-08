#include<iostream>
using namespace std;
bool vowel(char);
int main(){
char ch;
cout<<"Enter character : ";
cin>>ch;
if(vowel(ch)){
	cout<<"Vowel";
}
else{
	cout<<"Consonant";
}
return 0;
}
bool vowel(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		return true;
	}
	else{
		return false;
	}
}
