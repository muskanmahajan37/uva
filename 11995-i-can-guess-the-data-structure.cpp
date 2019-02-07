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

vi in;
vi out;

bool isq(int n){

	int size = out.size();

	for(int i = 0; i<size ; ++i){

		if(out[i]!=in[i])
			return false;
	}

	return true;
}

bool isst(int n ){

	int size = out.size();

}

bool ispq(int n){

}

int main(){

	
	int n ;

	while(cin>>n){

		for(int i = 0; i<n ; ++i){

			int x , y ;
			cin>>x>>y;

			if(x==1)
				in.pb(y);
			else
				out.pb(y);

		}

	}



	return 0 ;
}
