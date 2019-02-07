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

static int res[1000000];

int main(){


	int n ;
	
	scanf("%d",&n);

	int n1[1000000];
	int n2[1000000];

	for(int i= 0; i<n ; ++i){

		getchar();

		int m ; scanf("%d",&m);

		for(int j = 0 ; j<m ; ++j){
			scanf("%d%d",&n1[j],&n2[j]);
		}

		
		int carry = 0;

		for(int j= m-1 ; j>=0 ; --j){

			if((n1[j]+n2[j]+carry)>9){
				res[j] = (n1[j]+n2[j]+carry)%10; carry = 1;
			}
			else{
				res[j] = n1[j]+n2[j]+carry; carry = 0;
			}
			
		}

		if(carry==1)
			printf("1");

		for(int j = 0 ; j<m ; ++j)
			printf("%d",res[j]);


		printf("\n");

		if(n-1!=i)
			printf("\n");

	}


	return 0 ;
}