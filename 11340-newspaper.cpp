//Status :AC
//email:siriuslyra94@gmail.com

#include <bits/stdc++.h>
#include <stdio.h>

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

char in[2000000];

int main(){

	int t ;

	scanf("%d",&t);

	for(int k = 0; k<t ; ++k){
		
		char c ;

		int n , m;

		umap<char,double>pmap;

		double total =0 , x ;

		scanf("%d",&n);// getchar();

		for(int i =0 ; i<n ; ++i){

			cin>>c>>x;

			pmap[c] = x;
		}
 	
		scanf("%d",&m); getchar();

		for(int i = 0; i<m; ++i){

			scanf("%[^\t]",in); 

			int len = strlen(in);

			for(int j = 0 ;j <len ; ++j){

				umap<char,double>::iterator it = pmap.find(in[j]);

				if(it!=pmap.end())
					total+= it->second;

			}

		}

		printf("%0.2lf$\n",total/100);

	}

	return 0 ;
}
