//Status :WA
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

	int x ;

	cin>>x; getchar();

	vector<pair<int,char>>m;

	while(x--){

		string in ;

		getline(cin,in);

		int len = in.length();

		for(int i = 0; i<len ; ++i){

			if(isalpha(in[i])){

				char c = in[i];

				if(islower(c))
					c = toupper(c);

				int size = m.size();

				bool found = false;

				for(int i = 0 ; i<size ; ++i){
					if(m[i].second==c){
						m[i].first++;
						found = true;
					}
				}

				if(!found)
					m.pb(mp(1,c));
			}
		}

	}

	sort(m.begin(),m.end());	

	multimap<int,char> mm;

	int size = m.size();

	for(int i = 0; i<size ; ++i){	
		mm.insert(mp(m[i].first,m[i].second));
	}


	for(pair<int,char> i: mm)
		cout<<i.second<<" "<<i.first<<"\n";

	return 0 ;
}
