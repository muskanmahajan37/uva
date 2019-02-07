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
 

 ll powtrail(ll n , int k){

 	ll res = 1 ;

 	n = n%1000;

 	while(k>0){

 		if(k & 1){

 		   res = (res * n)%1000;
 		}

 		n = (n*n)%1000;


 		k = k>>1;
 	}

 	return res;
 }
 
 int main(){
 	
 	int t ;

 	scanf("%d",&t);

 	while(t--){

 		ll n ; int k ;

 		scanf("%lld%d",&n,&k);

 		int trail = powtrail(n,k);

 		int x = pow(10, fmod(k*log10(n)));

 	}

 		

 	return 0 ;
 }