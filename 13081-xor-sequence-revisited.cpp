//Status : TLE
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

	int t;

	cin>>t;

	while(t--){


		ll a , b;

		cin>>a>>b;

		int l ;

		ll anot = 1;

		for(ll i =1 ; i<=a ; ++i){

			anot = anot^i;
		}

		ll res = anot;

		for(  ; a<=b ; ++a){

			anot ^=(a-1);

			res &=anot;
		}

		cout<<res<<endl;

	}
	

	return 0 ;
}
