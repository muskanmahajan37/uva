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



int foo(int x){

	int count = 0;

	while(x!=1){

	   if(x & 1){
	   	  x = 3*x +1 ; count++;
	   }
	   else{

	   	  x = x>>1; count++;
	   }

	}

	return count;
}


int main(){

	int a , b;

	while(cin>>a>>b){

		if(a==0 && b==0)
			break;

		if(a>b)
			swap(a,b);


		int res = a , max = INT_MIN ;


		for(int i = a ; i<=b ; ++i){
			
			int total = foo(i);

			if(total>max){
				res = i; max = total;
			}
		}

		cout<<"Between "<<a<<" and "<<b<<", "<<res<<" generates the longest sequence of "<<max<<" values.\n";
	}

	return 0 ;
}