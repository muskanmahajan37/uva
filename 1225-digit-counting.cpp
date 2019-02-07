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

	while(t--){

		int n ;
		cin>>n;

		int arr[10] = {0};

		for(int i = 1; i<=n ; ++i){

			int tmp = i;

			while(tmp!=0){

				arr[tmp%10]++;

				tmp /=10;
			}
		}

		for(int i = 0; i<10 ; ++i){
			cout<<arr[i];
			if(i!=9)
				cout<<" ";
		}

		cout<<'\n';

	}

	return 0 ;
}