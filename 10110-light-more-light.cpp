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

int main(){
	
	unsigned int n ;

	while(cin>>n){

		if(n==0)
			return 0;

		int r = (int)sqrt(n);

		if(r*r ==n)
			cout<<"yes\n";	
		else
			cout<<"no\n";
	}	



	return 0 ;
}
