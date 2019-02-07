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

int gcd(int a , int b , int &x, int &b){


	if(a==0){

		x = 0 ;
		y = 1;
		return b;
	}

	int x1 , y1 ;

	int d = gcd(b%a , a,x1,y1);

	x = y1 -(b/a)*x1;
	y = x1 ;

	return d;
}


int main(){


	return 0 ;
}