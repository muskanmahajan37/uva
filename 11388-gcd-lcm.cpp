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

	int t ;
	cin>>t;

	for(int i = 0; i<t ;++i){

		int gcd , lcm ; 
		cin>>gcd>>lcm;		
		int a = -1 , b = -1 ;

		if(lcm%gcd==0){
			a = gcd ; 
			b = lcm ;
		}

		if(a!=-1)
			cout<<a<<" "<<b<<endl;
		else
			cout<<-1<<endl;

	}

	return 0 ;
}