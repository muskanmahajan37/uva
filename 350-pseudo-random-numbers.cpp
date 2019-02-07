//Status:AC
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

	int z , i , m , l , kase = 0;

	while(cin>>z>>i>>m>>l){

		if(z==0 && i==0 && m==0 && l==0)
			return 0 ;

		int seed = l;
		z = z%m; i = i%m;

		int rand = ((z*l%m)+i)%m;
		l = rand;

		seed = rand;

		rand = ((z*l%m)+i)%m;
		

		int count = 0  ;

		while(rand!=seed){

			rand = ((z*l%m)+i)%m;

			count++;

			if(rand<0)
				break;

			l = rand;
		}

		cout<<"Case "<<++kase<<": "<<count<<endl;

	}


	return 0 ;
}