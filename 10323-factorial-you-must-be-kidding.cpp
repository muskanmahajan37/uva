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

	int n ;
	
	ll arr[6]={40320,362880,3628800,39916800,479001600,6227020800};

	while(cin>>n){

		if(n>13 || (n<0 && n%2!=0))
			cout<<"Overflow!\n";
		else if(n<8 || (n<0 && n%2==0))
			cout<<"Underflow!\n";
		else{

			cout<<arr[n-8]<<"\n";
		}

	}




	return 0 ;
}
