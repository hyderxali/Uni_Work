#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4,num5;
	cout<<"Enter First number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"Enter third number : ";
	cin>>num3;
	cout<<"Enter fourth number : ";
	cin>>num4;
	cout<<"Enter fifth number : ";
	cin>>num5;
	if((num1>num2)&&(num1>num3)&&(num1>num4)&&(num1>num5)){
		cout<<"First Number is the greatest"<<endl;
	}
	else if((num2>num1)&&(num2>num3)&&(num2>num4)&&(num2>num5)){
		cout<<"Second number is the greatest"<<endl;
	}
	else if((num3>num1)&&(num3>num2)&&(num3>num4)&&(num3>num5)){
		cout<<"Third number is the greatest"<<endl;
	}
	else if((num4>num1)&&(num4>num2)&&(num4>num3)&&(num4>num5)){
		cout<<"Fourth number is the greatest"<<endl;
	}
	else if((num5>num1)&&(num5>num2)&&(num5>num3)&&(num5>num4)){
		cout<<"Fifth number is the greatest"<<endl;
	}
	if((num1<num2)&&(num1<num3)&&(num1<num4)&&(num1<num5)){
		cout<<"First Number is the lowest"<<endl;
	}
	else if((num2<num1)&&(num2<num3)&&(num2<num4)&&(num2<num5)){
		cout<<"Second number is the lowest"<<endl;
	}
	else if((num3<num1)&&(num3<num2)&&(num3<num4)&&(num3<num5)){
		cout<<"Third number is the lowest"<<endl;
	}
	else if((num4<num1)&&(num4<num2)&&(num4<num3)&&(num4<num5)){
		cout<<"Fourth number is the lowest"<<endl;
	}
	else if((num5<num1)&&(num5<num2)&&(num5<num3)&&(num5<num4)){
		cout<<"Fifth number is the lowest";
	}


return 0;
}

