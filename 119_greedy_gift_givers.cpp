/*
ID: siriusl1
TASK: gift1
LANG: C++                 
*/

#include <bits/stdc++.h>


using namespace std;

#define pb push_back

int main(){


	int n ; 

	cin>>n;
	while(true){

	map<string,int>list;
	vector<string>names;


	for(int i = 0 ; i<n ; ++i){

		string temp ;

		cin>>temp;

		list[temp] = 0 ; 

		names.pb(temp);
	}

	for(int i = 0 ; i<n ; ++i){

		string giver ;
		int amount , z;

		cin>>giver>>amount>>z;

		int m = 0 ;

		if(z!=0)
			 m = amount/z ;

		list.find(giver)->second -= (m*z);

		string tmp;

		for(int j = 0 ; j<z ; ++j){

			cin>>tmp;

			list.find(tmp)->second += m ;

		}
	}

	for(int i = 0 ; i<n ; ++i){

		cout<<names[i]<<" "<<list.find(names[i])->second<<"\n";
	}

	if(cin>>n)
		cout<<"\n";
	else
		break;

	}


	return 0 ;
}