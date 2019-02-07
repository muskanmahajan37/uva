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


int foo(int n){

	int g = 0;

	for(int j =1; j<=n ;++j){
		for(int k = j+1 ; k<=n ;++k){
			g+= __gcd(j,k);
		}

	}


	return g;
}

int main(){



	int n;

	while(cin>>n){

		if(n==0)
			return 0 ;

		cout<<foo(n)<<endl;

	}

	return 0 ;
}
