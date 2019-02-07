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

	int in ;

	while(cin>>in){

		int l1 = (in & 255);

		int l2 = (in & (255<<8));

		int l3 = (in & (255<<16));

		int l4 = (in & (255<<24));

		int res = (l2<<8 | l3>>8 | l1<<24 | ((l4>>24) & 255));

		cout<<in<<" converts to "<<res<<endl;
	}

	return 0 ;
}