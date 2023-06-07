#include<iostream>
using namespace std;
int main(){
int num1,num2,num3,num4;
cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;
cout<<"Enter third number : ";
cin>>num3;
cout<<"Enter fourth number : ";
cin>>num4;
//For Decending Order
//num 1 is the greatest
if((num1>num2&&num1>num3&&num1>num4)&&(num2>num3&&num2>num4&&num3>num4)){
	cout<<"In Decending order : "<<num1<<","<<num2<<","<<num3<<","<<num4<<endl;
}
else if((num1>num2&&num1>num3&&num1>num4)&&(num2>num4&&num2>num3&&num4>num3)){
	cout<<"In Decending order : "<<num1<<","<<num2<<","<<num4<<","<<num3<<endl;
}
else if((num1>num2&&num1>num3&&num1>num4)&&(num3>num2&&num3>num4&&num2>num4)){
	cout<<"In Decending order : "<<num1<<","<<num3<<","<<num2<<","<<num4<<endl;
}
else if((num1>num2&&num1>num3&&num1>num4)&&(num3>num4&&num3>num2&&num4>num2)){
	cout<<"In Decending order : "<<num1<<","<<num3<<","<<num4<<","<<num2<<endl;
}
else if((num1>num2&&num1>num3&&num1>num4)&&(num4>num2&&num4>num3&&num2>num3)){
	cout<<"In Decending order : "<<num1<<","<<num4<<","<<num2<<","<<num3<<endl;
}
else if((num1>num2&&num1>num3&&num1>num4)&&(num4>num3&&num4>num2&&num3>num2)){
	cout<<"In Decending order : "<<num1<<","<<num4<<","<<num3<<","<<num2<<endl;
}
//num2 is the greatest
else if((num2>num1&&num2>num3&&num2>num4)&&(num1>num3&&num1>num4&&num3>num4)){
	cout<<"In Decending order : "<<num2<<","<<num1<<","<<num3<<","<<num4<<endl;
}
else if((num2>num1&&num2>num3&&num2>num4)&&(num1>num4&&num1>num3&&num4>num3)){
	cout<<"In Decending order : "<<num2<<","<<num1<<","<<num4<<","<<num3<<endl;
}
else if((num2>num1&&num2>num3&&num2>num4)&&(num3>num1&&num3>num4&&num1>num4)){
	cout<<"In Decending order : "<<num2<<","<<num3<<","<<num1<<","<<num4<<endl;
}
else if((num2>num1&&num2>num3&&num2>num4)&&(num3>num4&&num3>num1&&num4>num1)){
	cout<<"In Decending order : "<<num2<<","<<num3<<","<<num4<<","<<num1<<endl;
}
else if((num2>num1&&num2>num3&&num2>num4)&&(num4>num1&&num4>num3&&num1>num3)){
	cout<<"In Decending order : "<<num2<<","<<num4<<","<<num1<<","<<num3<<endl;
}
else if((num2>num1&&num2>num3&&num2>num4)&&(num4>num3&&num4>num1&&num3>num1)){
	cout<<"In Decending order : "<<num2<<","<<num4<<","<<num3<<","<<num1<<endl;
}
//num3 is greatest
else if((num3>num1&&num3>num2&&num3>num4)&&(num1>num2&&num1>num4&&num2>num4)){
	cout<<"In Decending order : "<<num3<<","<<num1<<","<<num2<<","<<num4<<endl;
}
else if((num3>num1&&num3>num2&&num3>num4)&&(num1>num4&&num1>num2&&num4>num2)){
	cout<<"In Decending order : "<<num3<<","<<num1<<","<<num4<<","<<num2<<endl;
}
else if((num3>num1&&num3>num2&&num3>num4)&&(num2>num1&&num2>num4&&num1>num4)){
	cout<<"In Decending order : "<<num3<<","<<num2<<","<<num1<<","<<num4<<endl;
}
else if((num3>num1&&num3>num2&&num3>num4)&&(num2>num4&&num2>num1&&num4>num1)){
	cout<<"In Decending order : "<<num3<<","<<num2<<","<<num4<<","<<num1<<endl;
}
else if((num3>num1&&num3>num2&&num3>num4)&&(num4>num1&&num4>num2&&num1>num2)){
	cout<<"In Decending order : "<<num3<<","<<num4<<","<<num1<<","<<num2<<endl;
}
else if((num3>num1&&num3>num2&&num3>num4)&&(num4>num2&&num4>num1&&num2>num1)){
	cout<<"In Decending order : "<<num3<<","<<num4<<","<<num2<<","<<num1<<endl;
}
//num4 is greatest
else if((num4>num1&&num4>num2&&num4>num3)&&(num1>num2&&num1>num3&&num2>num3)){
	cout<<"In Decending order : "<<num4<<","<<num1<<","<<num2<<","<<num3<<endl;
}
else if((num4>num1&&num4>num2&&num4>num3)&&(num1>num3&&num1>num2&&num3>num2)){
	cout<<"In Decending order : "<<num4<<","<<num1<<","<<num3<<","<<num2<<endl;
}
else if((num4>num1&&num4>num2&&num4>num3)&&(num2>num1&&num2>num3&&num1>num3)){
	cout<<"In Decending order : "<<num4<<","<<num2<<","<<num1<<","<<num3<<endl;
}
else if((num4>num1&&num4>num2&&num4>num3)&&(num2>num3&&num2>num1&&num3>num1)){
	cout<<"In Decending order : "<<num4<<","<<num2<<","<<num3<<","<<num1<<endl;
}
else if((num4>num1&&num4>num2&&num4>num3)&&(num3>num1&&num3>num2&&num1>num2)){
	cout<<"In Decending order : "<<num4<<","<<num3<<","<<num1<<","<<num2<<endl;
}
else if((num4>num1&&num4>num2&&num4>num3)&&(num3>num2&&num3>num1&&num2>num1)){
	cout<<"In Decending order : "<<num4<<","<<num3<<","<<num2<<","<<num1<<endl;
}
else{
	cout<<"Please Avoid equal numbers and try to enter different numbers";
}



//For accending order Order


//num 1 is the smallest
if((num1<num2&&num1<num3&&num1<num4)&&(num2<num3&&num2<num4&&num3<num4)){
	cout<<"In accending order : "<<num1<<","<<num2<<","<<num3<<","<<num4<<endl;
}
else if((num1<num2&&num1<num3&&num1<num4)&&(num2<num4&&num2<num3&&num4<num3)){
	cout<<"In accending order : "<<num1<<","<<num2<<","<<num4<<","<<num3<<endl;
}
else if((num1<num2&&num1<num3&&num1<num4)&&(num3<num2&&num3<num4&&num2<num4)){
	cout<<"In accending order : "<<num1<<","<<num3<<","<<num2<<","<<num4<<endl;
}
else if((num1<num2&&num1<num3&&num1<num4)&&(num3<num4&&num3<num2&&num4<num2)){
	cout<<"In accending order : "<<num1<<","<<num3<<","<<num4<<","<<num2<<endl;
}
else if((num1<num2&&num1<num3&&num1<num4)&&(num4<num2&&num4<num3&&num2<num3)){
	cout<<"In accending order : "<<num1<<","<<num4<<","<<num2<<","<<num3<<endl;
}
else if((num1<num2&&num1<num3&&num1<num4)&&(num4<num3&&num4<num2&&num3<num2)){
	cout<<"In accending order : "<<num1<<","<<num4<<","<<num3<<","<<num2<<endl;
}
//num2 is the smallest
else if((num2<num1&&num2<num3&&num2<num4)&&(num1<num3&&num1<num4&&num3<num4)){
	cout<<"In accending order : "<<num2<<","<<num1<<","<<num3<<","<<num4<<endl;
}
else if((num2<num1&&num2<num3&&num2<num4)&&(num1<num4&&num1<num3&&num4<num3)){
	cout<<"In accending order : "<<num2<<","<<num1<<","<<num4<<","<<num3<<endl;
}
else if((num2<num1&&num2<num3&&num2<num4)&&(num3<num1&&num3<num4&&num1<num4)){
	cout<<"In accending order : "<<num2<<","<<num3<<","<<num3<<","<<num4<<endl;
}
else if((num2<num1&&num2<num3&&num2<num4)&&(num3<num4&&num3<num1&&num4<num1)){
	cout<<"In accending order : "<<num2<<","<<num3<<","<<num4<<","<<num1<<endl;
}
else if((num2<num1&&num2<num3&&num2<num4)&&(num4<num1&&num4<num3&&num1<num3)){
	cout<<"In accending order : "<<num2<<","<<num4<<","<<num1<<","<<num3<<endl;
}
else if((num2<num1&&num2<num3&&num2<num4)&&(num4<num3&&num4<num1&&num3<num1)){
	cout<<"In accending order : "<<num2<<","<<num4<<","<<num3<<","<<num1<<endl;
}
//num3 is smallest
else if((num3<num1&&num3<num2&&num3<num4)&&(num1<num2&&num1<num4&&num2<num4)){
	cout<<"In accending order : "<<num3<<","<<num1<<","<<num2<<","<<num4<<endl;
}
else if((num3<num1&&num3<num2&&num3<num4)&&(num1<num4&&num1<num2&&num4<num2)){
	cout<<"In accending order : "<<num3<<","<<num1<<","<<num4<<","<<num2<<endl;
}
else if((num3<num1&&num3<num2&&num3<num4)&&(num2<num1&&num2<num4&&num1<num4)){
	cout<<"In accending order : "<<num3<<","<<num2<<","<<num1<<","<<num4<<endl;
}
else if((num3<num1&&num3<num2&&num3<num4)&&(num2<num4&&num2<num1&&num4<num1)){
	cout<<"In accending order : "<<num3<<","<<num2<<","<<num4<<","<<num1<<endl;
}
else if((num3<num1&&num3<num2&&num3<num4)&&(num4<num1&&num4<num2&&num1<num2)){
	cout<<"In accending order : "<<num3<<","<<num4<<","<<num1<<","<<num2<<endl;
}
else if((num3<num1&&num3<num2&&num3<num4)&&(num4<num2&&num4<num1&&num2<num1)){
	cout<<"In accending order : "<<num3<<","<<num4<<","<<num2<<","<<num1<<endl;
}
//num4 is smallest
else if((num4<num1&&num4<num2&&num4<num3)&&(num1<num2&&num1<num3&&num2<num3)){
	cout<<"In accending order : "<<num4<<","<<num1<<","<<num2<<","<<num3<<endl;
}
else if((num4<num1&&num4<num2&&num4<num3)&&(num1<num3&&num1<num2&&num3<num2)){
	cout<<"In accending order : "<<num4<<","<<num1<<","<<num3<<","<<num2<<endl;
}
else if((num4<num1&&num4<num2&&num4<num3)&&(num2<num1&&num2<num3&&num1<num3)){
	cout<<"In accending order : "<<num4<<","<<num2<<","<<num1<<","<<num3<<endl;
}
else if((num4<num1&&num4<num2&&num4<num3)&&(num2<num3&&num2<num1&&num3<num1)){
	cout<<"In accending order : "<<num4<<","<<num2<<","<<num3<<","<<num1<<endl;
}
else if((num4<num1&&num4<num2&&num4<num3)&&(num3<num1&&num3<num2&&num1<num2)){
	cout<<"In accending order : "<<num4<<","<<num3<<","<<num1<<","<<num2<<endl;
}
else if((num4<num1&&num4<num2&&num4<num3)&&(num3<num2&&num3<num1&&num2<num1)){
	cout<<"In accending order : "<<num4<<","<<num3<<","<<num2<<","<<num1<<endl;
}
else{
	cout<<"Please Avoid equal numbers and try to enter different numbers";
}


return 0;
}

