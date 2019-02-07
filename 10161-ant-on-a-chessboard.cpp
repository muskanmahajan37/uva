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


int main(){

	 int n ;

	 while(cin>>n){

	 	if(n==0)
	 		return 0;

	 	int  x = 1 , y = 1;

	 	int count = 1;
	 	int mv = count*2+1;
	 	int mid = count+1;
	 	int tmp = 1;

	 	int track = 0;

	 	for(int i = 1 ; i<n ; ++i){


	 		if(tmp<mid){

	 			if(track==0 && tmp==1)
	 				y++;
	 			else if(tmp ==1 && track==1)
	 				x++;
	 			else if(track==1)
	 				y++;
	 			else if(track ==0)
	 				x++;

	 			tmp++;
	 		}
	 		else if(tmp==mid){

	 			if(track==0)
	 				x++;
	 			else{
	 				y++; 
	 			}

	 			tmp++;
	 		}
	 		else if(tmp>mid && tmp<mv ){
	 			if(track==0)
	 				y--;
	 			else{
	 				x--;
	 			}

	 			 tmp++;
	 		}	
	 		else if(tmp==mv){

	 			if(track==0){
	 				y--;
	 				track = 1;
	 			}
	 			else{
	 				x--; 
	 				track = 0;
	 			}

	 			tmp = 1 ; 
	 			count++;
	 			mid = count+1;
	 			mv = count*2+1;
	 		}
	 			

	 	}

	 	cout<<x<<" "<<y<<"\n";

	 }


	return 0 ;
}