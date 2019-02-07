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

	int n ;

	while(scanf("%d",&n)!=EOF){

		int i = 1; 
		int less  = -1;
		int tmp = n;
		for(i =1 ; n>0 ; ++i ){

			if(n-i<=0){
				less = n;
			}

			n-=i;
		}

		i--;

		int x = i-less+1;
		int y = less;
		
		if(i%2==0)
			swap(x,y);



		cout<<"TERM "<<tmp<<" IS "<<x<<"/"<<y<<"\n";
		
		
	}

	return 0 ;
}