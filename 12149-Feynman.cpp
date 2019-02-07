//Status 
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


		int res = 0;

		for(int i = 1 ; i<=n ; ++i)
			res+=i*i;

		cout<<res<<endl;

	}	


	return 0 ;
}