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

	while(cin>>n){

		if(n==0)
			return 0;

		int count = 0 ;

		int a;

		vector<int>arr;

		for(int i =0 ; i<n ; ++i){
			cin>>a;
			arr.pb(a);
		}

		for(int i = 0; i<n ; ++i){

			for(int j = 0 ; j<n ; ++j){

				if(__gcd(arr[i],arr[j])==1)
					count++;
			}

		}

		count/=2; 

		int totalpair = ((n*(n-1))/2);

		if(count==0)
			cout<<"No estimate for this data set.\n";
		else{

			double res = sqrt(double(totalpair*6)/count);

			cout<<setprecision(6)<<fixed<<res<<endl;
		}
	}

	return 0 ;
}