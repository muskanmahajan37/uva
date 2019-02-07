//Status :
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

	
	int t ;
	cin>>t;

	for(int i= 0; i<t ; ++i){

		int n ;
		cin>>n;

		vi v ;

		int tmp;

		for(int j = 0 ;j<n ; ++j){
			cin>>tmp;
			v.pb(tmp);
		}

		vsort(v);

		cout<<v[n/2];
	

	}	



	return 0 ;
}
