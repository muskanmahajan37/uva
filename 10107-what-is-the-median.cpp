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

	vi v; 

	int x;

	while(cin>>x){
		v.pb(x);

		vsort(v);

		int size = v.size();

		if(size%2!=0)
			cout<<v[size/2]<<'\n';	
		else
			cout<<(v[size/2-1]+v[size/2])/2<<'\n';


	}

	


	return 0 ;
}
