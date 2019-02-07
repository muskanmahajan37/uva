//Status :
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

int arr[1000000];

int main(){

	int t ;
	scanf("%d",&t);

	for(int k = 0 ; k<t ; ++k){

		int n ;

		scanf("%d",&n);

		for(int i =0 ; i<n; ++i){
			scanf("%d",&arr[i]);
		}

		int count = 0;

		for(int i = 0; i<n ; ++i){
			//for(int j = i+1 ; j<n ; ++j){

				if(__gcd(arr[i],i+1)>1)
					count++;
			//}
		}


		printf("Case %d: %d\n",k+1,count);


	}

	return 0 ;
}
