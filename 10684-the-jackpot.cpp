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

int arr[20000];

int main(){

	
	int n;

	while(cin>>n){


		if(n==0)
			return 0;

		for(int i = 0 ; i<n ; ++i)
			cin>>arr[i];

		int max = -1;

		for(int i =0 ; i<n ; ++i){

			int tmpmax = 0;

			for(int j = i ;j<n ; ++j){

				tmpmax+=arr[j];

				if(tmpmax>max)
					max = tmpmax;

			}

		}

		if(max<=0)
			cout<<"Losing streak.\n";
		else
			cout<<"The maximum winning streak is "<<max<<".\n";

	}

	return 0 ;
}
