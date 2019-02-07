//Status :wA
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

	int n ;

	while(cin>>n){


		if(n==0)
			return 0 ;

		vi v;

		for(int i = 0;i<n ; ++i){
			int tmp ;
			cin>>tmp;
			v.pb(tmp);
		}

		vsort(v);

		int cost = 0 ;    
		int prev = v[0];  

		for(int i = 1; i<n ; i++){
				
			prev +=v[i];

			cost += prev;
		}

		cout<<cost<<endl;

	}	



	return 0 ;
}
