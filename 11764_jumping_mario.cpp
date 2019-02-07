#include<iostream>

using namespace std;

int main(){

	int test , kase = 0;

	cin>>test;

	while(test--)
	     {
		int N;
		cin>>N;
		
		int high = 0 , low  = 0 ;

		int array[N];
		
		for(int i = 0  ;i<N ; i++)
		    cin>>array[i];

		for(int i = 0 ; i<N-1 ; i++)
		    if(array[i]<array[i+1])
			++high;
		     else if(array[i]>array[i+1])
			 ++low;

		cout<<"Case "<<++kase<<": "<<high<<" "<<low<<endl;
	   }

	return 0;
}		



		
