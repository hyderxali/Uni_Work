#include<iostream>
using namespace std;
int main(){
int arr[10],counter,visited[10]={0};
for(int i=0;i<10;i++){
	cout<<"Enter value no "<<i+1<<" : ";
	cin>>arr[i];
}
for(int i=0;i<10;i++){
	if(visited[i]!=1){
	counter=0;
	for(int j=0;j<10;j++){
		if(arr[i]==arr[j]){
			counter++;
			visited[j] = 1;
		}
	}
	cout<<arr[i]<<" occured "<<counter<<" times"<<endl;
}
}
return 0;
}

