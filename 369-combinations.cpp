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

int binomialCoeff(int n, int k) 
{ 

  if (k==0 || k==n) 
    return 1; 

  return  binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k); 
} 


int main(){

	int n, k;

	while(cin>>n>>k){

		if(n==0 && k==0)
			return 0;

		


	}

	return 0 ;
}