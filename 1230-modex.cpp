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

int bigmod(int x, int y , int n){

	int res = 1 ; 

	while(y>0){

		if(y & 1)
			res = (res%n * x%n)%n;

		int tmp = x%n;

		x = (tmp*tmp)%n;

		y = 	y>>1;
	}

	return res;

}


int main(){


	int c;

	scanf("%d",&c);


	for(int i = 0 ; i<c ; ++i){

		int x , y , n;

		scanf("%d%d%d",&x,&y,&n);

		printf("%d\n",bigmod(x,y,n));
	}	

	int tmp; scanf("%d",&tmp);


	return 0 ;
}