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

	
	int x;
	
	map<int,int>dic;
	vi v;

	while(cin>>x){

		map<int,int>::iterator it = dic.find(x);

		if(it==dic.end()){
			dic[x]=1; v.pb(x);
		}
		else
			it->second++;
	}

	int size = v.size();

	for(int i = 0; i<size ; ++i){

		cout<<v[i]<<" "<<dic.find(v[i])->second<<"\n";
	}




	return 0 ;
}
