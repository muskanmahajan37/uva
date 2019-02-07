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

#define max 1000000

vi prime;

void seive(){

	bool isprime[max] = {true};

	isprime[0] = isprime[1] = false;

	prime.pb(2);

	for(int i = 4 ; i<=max ; i+=2)
		isprime[i] = false;

	for(int i = 3 ; i<=max ; i+=2){
		
		if(isprime[i]){

			prime.pb(i);
			
			if(i*i<=max)
				for(int j = i ; j<=max ; j+=i*2)
					isprime[i] = false;
			
		}
	}

}


int main(){

	seive();

	for(int i = 0 ; i<10 ; ++i)
		cout<<prime[i]<<" ";

	return 0 ;
}