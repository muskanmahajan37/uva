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

int bigmod(int b , int p , int m ){

	int res = 1; 

	while(p>0){

		if(p & 1)
			res = (res*(b%m))%m;

		int tmp = b%m;

		b = (tmp*tmp)%m;

		p = p>>1;
	}

	return res;
}



int main(){

	int  b ,p , m;

	while(scanf("%d%d%d",&b,&p,&m)!=EOF){

		printf("%d\n",bigmod(b,p,m));

		string blank ; getline(cin,blank);
	}


	return 0 ;
}