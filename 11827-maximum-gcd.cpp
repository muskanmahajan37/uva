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

	int t ;
	cin>>t;

	while(t--){

		int tmp;
		char tmp2;
		vector<int>arr;

		while(scanf("%d%c",&tmp,&tmp2)!=EOF){
			if(tmp2=='\n'){
				break;++
			}
			arr.pb(tmp);

			cout<<tmp<<tmp2;
		}

		int m = 1; 
		int size = arr.size();
		
		for(int i = 0 ; i<size ; ++i){
			for(int j = i+1 ; j<size ; ++j){
				m = max( __gcd(arr[i],arr[j]) , m );
			}
		}


	}


	return 0 ;
}