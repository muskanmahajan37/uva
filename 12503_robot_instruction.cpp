#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(void){

	int test , n;
	string instruct;

	cin>>test;

	while(test--){

	    cin>>n; cin.ignore();
	    int array[n];
	  for(int i = 0 ; i< n ; i++){
		
		cin>>instruct;
	
		if(instruct=="RIGHT")
		  array[i]=1;
		else if(instruct=="LEFT")
		  array[i]=-1;
		else{
			string tempinstruct ;  int temp;
			cin>>tempinstruct;
			cin>>temp; cin.ignore();
			array[i]=array[temp-1];
	    	    }
		}
		
		int sum = 0 ;

		for(int i = 0 ; i<n ; i++)
		   sum +=array[i];
		
		cout<<sum<<endl;
		

	   }
	
	return 0;

}
				
