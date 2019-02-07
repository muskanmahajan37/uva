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
	cin>>t; cin.ignore();

	while(t--){

		string in ;

		getline(cin,in);

		int q ;

		cin>>q; cin.ignore();

		while(q--){

			string sub;

			getline(cin,sub);

			if(in.find(sub)!=string::npos){

				cout<<"y\n";
			}
			else 
				cout<<"n\n";

		}

	}


	return 0 ;
}
