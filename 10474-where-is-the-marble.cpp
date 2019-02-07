//Status :AC
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

	

	int  n ,q ; int i = 0;

	while(cin>>n>>q){

		if(n==0 && q==0)
			return 0 ;

		vi v;

		for(int j = 0 ;j <n ; ++j){

			int tmp;
			cin>>tmp;
			v.pb(tmp);
		}

		sort(v.begin(),v.end());

		int size = v.size();

		cout<<"CASE# "<<i+1<<":\n";

		for(int j = 0; j <q ; ++j){

			int tmp;
			cin>>tmp;

			int found = -1;

			for(int k = 0; k<size ;++k)
				if(v[k]==tmp){
					found = k;
					break;
				}


			if(found<0)
				cout<<tmp<<" not found\n";
			else
				cout<<tmp<<" found at "<<found+1<<"\n";

		}

		i++;

	}


	return 0 ;
}
