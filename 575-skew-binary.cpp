//Status :AC
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

string in;	

int sbinary(int len , int x ,int p){

	if(len<0)
		return x;
	
	int tmp = ((int)in[len]-48)%10;

	x +=(p-1)*tmp;

	return sbinary(--len,x,p*2);
}

int main(){


	while(cin>>in){

		int len = in.length();

		if(len==1 && (in[0]-48==0))
			return 0 ;

		cout<<sbinary(len-1,0,2)<<"\n";


	}



	return 0 ;
}
