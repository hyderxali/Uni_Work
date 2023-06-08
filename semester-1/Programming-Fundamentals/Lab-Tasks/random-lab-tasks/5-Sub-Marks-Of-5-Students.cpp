#include<iostream>
using namespace std;
int main()
{
	
	// Declarations
	float marks[5][5], temp[5];
	string sub[5]={"PF", "ICT" , "AP", "ECC" , "ITL"};
	float max = 0, min = 0;
	float sum=0,avg=0;

	
	// Outer Most Loop (i)
	for(int i=0; i<5; i++){
	    sum = 0;
	    temp[5] = {0};
		for(int j=0; j<5; j++){
			// For Input Marks
			cout<<"Enter Marks Of "<<sub[j] <<" Of Student "<<i+1 <<" :- ";
			cin>>marks[i][j];
			temp[j] = marks[i][j];
			sum += marks[i][j];
		}
		cout<<endl;

        avg=0;
		// For Avg
		avg = sum/5;

		   
		// For Max
		    max = temp[0];
			for(int k=0; k<5; k++){
			
				if(temp[k]>max){
			    	max = temp[k];
			    }
			}
		
		// For Min
			min = temp[0];
			for(int l=0; l<5; l++){
			
				if(temp[l]<min){
				    min = temp[l];
			    }
		   }

		// For Outputs
		cout<<"Result "<<i+1<<" :- "<<endl;
	    cout<<"Maximum Marks Are :- "<<max<<endl;
	    cout<<"Minimum Marks Are :- "<<min<<endl;
	    cout<<"Average Marks = "<<avg<<"%"<<endl<<endl;
	}
	
	// Optional
	// For Output Table 
	cout<<"Result Table :- \n";
	cout<<"Student/Subject  ";
	for(int o=0; o<5; o++){
		cout<<sub[o]<<"\t";
	}
	cout<<endl;
	for(int m=0; m<5; m++){
		cout<<"\t"<<m+1<<"\t ";
		for(int n=0; n<5; n++){
			cout<<marks[m][n]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}