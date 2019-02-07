//Status : Accepted


#include <bits/stdc++.h>

using namespace std;


int main(){


	int kase ; 

	cin>>kase ;

	for(int i = 0; i<kase ; ++i){

		int n , k , p ;

		cin>>n>>k>>p;


		if((k+p)%n==0)
			cout<<"Case "<<i+1<<": "<<n<<endl;
		else
			cout<<"Case "<<i+1<<": "<<(k+p)%n<<endl;


	}


	return 0 ;
}