/*
* @Author: eleven
* @Date:   2018-08-10 03:18:24
* @Last Modified by:   eleven
* @Last Modified time: 2018-08-10 03:59:06
*/

//Status : AC
//email:siriuslyra94@gmail.com

#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define umap unordered_map
#define ll long long
#define vsort(v) sort(v.begin(),v.end())
#define lcm(a,b) (a*b)/__gcd(a,b)

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main(){

	string input;

	while(getline(cin,input)){
		
		vi v ;

		v.pb(0);

		int len = input.length();

		for(int i = 0; i<len ;++i){
			if(input[i]==' ')
				v.pb(i+1);
		}

		v.pb(len+1);

		int size = v.size();

		for(int i = 0 ; i<size-1 ; ++i){
			reverse(input.begin()+v[i],input.begin()+v[i+1]-1);
		}

		cout<<input<<endl;


	}


	return 0 ;
}
