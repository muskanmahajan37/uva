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
			return 0 ;

		int li = sqrt(n)+1;

		int count=2;

		for(int i = 1;  i<=li ; ++i){
			if(n%i==0){
				count+=2;
				int tmp = n/i;
				if(__gcd(tmp,i)==1)
					count++;
			}
		}

		cout<<count<<endl;		
	}

	return 0 ;
}