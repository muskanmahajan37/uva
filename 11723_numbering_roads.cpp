//Status : AC

#include <bits/stdc++.h>

using namespace std;

int main(){

	int r , n , i = 0;


	while(cin>>r>>n){

		if(r==0 && n==0)
			return 0 ;

		if(n*26+n<r)
			cout<<"Case "<<i+1<<": "<<"impossible"<<endl;

		else if((r%n==0 && r/n==1)|| r/n==0) 
				cout<<"Case "<<i+1<<": "<<"0"<<endl;

		else if(r%n==0 && r/n>1)
			cout<<"Case "<<i+1<<": "<<r/n-1<<endl;
		else
			cout<<"Case "<<i+1<<": "<<r/n<<endl;
		i++;
	}

	

	return 0 ;
}