
#include<iostream>

using namespace std;

int main(void){


	int n ;
	cin>>n;
	

	while(n--){
	  
	    int row;
	    cin>>row;

	    int sum= 0,i=0,count=0;
	    
	    while((sum+(i+1))<=row)
		{
		   sum+=++i; count++; 
		}
	
	   cout<<count<<endl;
	}
		  
	return 0;
}
