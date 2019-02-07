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

	int t ; 
	cin>>t;
	while(t--){
		int a , c ; 
		cin>>a>>c;

		if(a%c==0)
			cout<<a/c<<endl;
		else
			cout<<"NO SOLUTION"<<endl;
	}

	return 0 ;
}