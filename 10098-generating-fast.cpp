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

int fact(int n){
	if(n==0)
		return 1;

	return n*fact(n-1);
}

int main(){

	int n; cin>>n;
	for(int i=0  ;i<n ; ++i){
		string tmp ; cin>>tmp;
		string m = tmp ;

		int len = tmp.length(); int index = 0;

		for(int j=0 ; j<len ; ++j){

			for(int k = 1; k<len-1 ; ++k){
				swap(tmp[k],tmp[k+1]);
				cout<<tmp<<'\n';

			}

			char c = m[++index];
			tmp = m;
			//cout<<tmp<<endl;

			for(int k=index-1; k>=0 ; --k){
				tmp[k+1] = tmp[k]; //cout<<tmp<<endl;
			}

			tmp[0] = c;
			cout<<tmp<<'\n';			

		}

	}

	return 0 ;
}