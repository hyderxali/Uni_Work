#include<iostream>
using namespace std;
void getData(int arr[12][2]);
float averageHigh(int arr[12][2]);
float averageLow(int arr[12][2]);
int indexHighTemp(int arr[12][2]);
int indexLowTemp(int arr[12][2]);

int main(){
//if(check==0){
	int arr[12][2];
getData(arr);
cout<<"H"<<"\t"<<"L"<<endl;
for(int i=0;i<12;i++){
	for(int j=0;j<2;j++){
		cout<<arr[i][j]<<"\t";
	}
	cout<<endl;
}
cout<<"Average of High temprature is : "<<averageHigh(arr)<<endl;
cout<<"Average of Lower temprature is : "<<averageLow(arr)<<endl;
cout<<"Highest temprature found at index : "<<indexHighTemp(arr)<<endl;
cout<<"Lowest temprature found at index : "<<indexLowTemp(arr)<<endl;
//}
return 0;
}
void getData(int arr[12][2]){
	int low , high;
	for(int i=0;i<12;i++){
	for(int j=0;j<2;j++){
		if(j%2==0){
			cout<<"Enter the higher temprature of month No. "<<i+1<<" : ";
			cin>>high;
			arr[i][j] = low;
		}
		else{
			cout<<"Enter the lower temprature of month No. "<<i+1<<" : ";
			cin>>low;
			arr[i][j]=high;
		}
	}
	if(low>high){
			cout<<"Invalid temprature entered"<<endl;
			exit(0);
		}
}
}
float averageHigh(int arr[12][2]){
	int sum=0;
	for(int i=0;i<12;i++){ 
		sum+=arr[i][0];
	}
	return (float)sum/12;
}
float averageLow(int arr[12][2]){
	int sum=0;
	for(int i=0;i<12;i++){
		sum+=arr[i][1];
	}
	return (float)sum/12;
}
int indexHighTemp(int arr[12][2]){
	int max=arr[0][0],temp=0,flag=0;
	for(int i=1;i<12;i++){
		if(max<arr[i][0]){
			temp=max;
			max = arr[i][0];
			arr[i][0] = temp;
			flag=i;
		}
	}
	return flag;
}
int indexLowTemp(int arr[12][2]){
	int min=arr[0][1],temp=0 , flag=0;
	for(int i=1;i<12;i++){
		if(min>arr[i][1]){
			temp=min;
			min = arr[i][1];
			arr[i][1] = temp;
			flag=i;
		}
	}
	return flag;
}




