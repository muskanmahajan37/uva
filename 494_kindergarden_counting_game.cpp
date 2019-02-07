#include <bits/stdc++.h>

using namespace std;

#define vint vector<int>
#define pb push_back



int main(){

	string in;

	while(getline(cin , in )){

		int count= 0 ;

		int len = in.length();

		for(int i = 0 ; i <len ; ++i){

			if(isalpha(in[i])){
				while(isalpha(in[i]))
					 i++;

				count++;
			}

		}

		cout<<count<<endl;

	}
	

	return 0 ;
}