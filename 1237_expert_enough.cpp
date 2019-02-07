/*
* @Author: eleven
* @Date:   2018-01-26 13:51:24
* @Last Modified by:   eleven
* @Last Modified time: 2018-01-27 16:56:34
*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	
	int t ; 

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>t ;

	while(t--){

		vector< pair < string , pair<int, int> > > database;

		int l , h ;
		string temp ;

		int dsize ; 

		cin>>dsize ;

		for(int i = 0  ; i<dsize ; ++i){
			cin>>temp>>l>>h;
			database.push_back(make_pair(temp ,make_pair(l,h)));
			
		}

		int q ;
		
		cin>>q ;

		int price;

		for(int i = 0; i<q ; ++i){

			cin>>price ;

			int found = 0 , index ;

			for(int j = 0 ,size = database.size() ; j<size ; ++j){

				if(price >= database[j].second.first &&
					price <= database[j].second.second){

					found++; index = j ;
				}

				if(found>1)
					break;
			}

			if(found==1)
				cout<<database[i].first<<'\n';
			else
				cout<<"UNDETERMINED\n";

		}

	}

	return 0 ;
}