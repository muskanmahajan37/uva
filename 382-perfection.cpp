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

	cout<<"PERFECTION OUTPUT\n";


	while(cin>>n){

		if(n==0){
			cout<<"END OF OUTPUT\n";

			break;
		}

		vi v ;

		int li = n/2;


		for(int i = 1; i<=li ; ++i){

			if(n%i==0){
				v.pb(i);
			}
		}

		int sum = accumulate(v.begin(),v.end(),0);

		string s = to_string(n);

		int len = 5-s.length();

		for(int i= 0; i<len ;++i)
			cout<<" ";

		cout<<s<<"  ";

		if(sum==n)
			cout<<"PERFECT\n";
		else if(sum<n)
			cout<<"DEFICIENT\n";
		else if(sum>n)
			cout<<"ABUNDANT\n";
	

	}



	return 0 ;
}
