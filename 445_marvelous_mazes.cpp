// status : AC

#include <bits/stdc++.h>

using namespace std;

int main(){


	string in ;

	while(getline(cin,in)){


		int len = in.length();

		int n = 0;

		for(int i = 0 ; i<len ; ++i){

			if(isdigit(in[i]))
				n+= int (in[i]-48);
			else if(in[i]=='!')
				cout<<'\n';
			else{

				char c  = in[i] ; 

				if(in[i]=='b')
					c =' ';
			
				for(int j = 0 ; j<n ; ++j){

					cout<<c;
				}

				n= 0;
			}

		}

		cout<<"\n";
	}




	return 0 ;
}