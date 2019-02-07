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

	int a , b ; 

	while(cin>>a>>b){
		if(a==0 && b==0)
			return 0 ;

		int count = 0 ;

		int tmp = 1; if(tmp>=a && tmp<=b) count++;

		for(int i = 3 ; tmp<=b ; i+=2){
			
			tmp+=i;

			if(tmp>=a && tmp<=b){
				count++;
			}

		}

		cout<<count<<endl;
	}

	return 0 ;
}