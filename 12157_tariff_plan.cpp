#include<iostream>

using namespace std;

int main(){

	int test,kase=0;
	cin>>test;
	
	while(test--){
	
	int N;
	cin>>N;
	int array[N];

	for(int i =0 ; i<N; i++)
	    cin>>array[i];

	int mile = 0 , juice = 0; 

	for(int i = 0 ; i<N ; i++){
	    mile+=(array[i]/30)*10+10;
	    juice+=(array[i]/60)*15+15;
	   	
	}
	
	if(mile<juice)
	  cout<<"Case "<<++kase<<": Mile "<<mile<<endl;
	else if(juice<mile)
	   cout<<"Case "<<++kase<<": Juice "<<juice<<endl;
	else
	   cout<<"Case "<<++kase<<": Mile Juice "<<mile<<endl;
	}
	
	return 0 ;
}
