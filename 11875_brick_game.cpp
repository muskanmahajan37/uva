//status : AC

#include <bits/stdc++.h>

using namespace std;


int main(){


	int kase ;

	cin>>kase ;

	for(int i = 0 ; i<kase ; ++i){

		int n ;

		vector<int>team;

		cin>>n ;

		int tmp ;

		for(int j = 0 ; j<n ; ++j){
			cin>>tmp;

			team.push_back(tmp);
		}

		sort(team.begin(),team.end());

		cout<<"Case "<<i+1<<": "<<team[n/2]<<endl;

	}



	return 0 ;
}