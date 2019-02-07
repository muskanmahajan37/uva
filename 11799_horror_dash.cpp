#include<iostream>

using namespace std;

int main(){

	int test, kase = 0 ;
	cin>>test;

	while(test--)
	    {
		int N;
		cin>>N;
		
		int array[N];
		
		for(int i = 0 ; i<N ; i++)
		    cin>>array[i];
		int least_speed = array[0];
	
		for(int i = 1 ; i<N ; i++)
		   if(array[i]>least_speed)
			least_speed = array[i];

		cout<<"Case "<<++kase<<": " <<least_speed<<endl;
	     }
	return 0 ;
}
