//Status:
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
			break;

		int tmp = 2863311530;

		int a = n & tmp;

		int b = n & (tmp>>1);

		cout<<a<<" "<<b<<endl;

	}


	return 0 ;
}