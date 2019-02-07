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

	int t ;

	cin>>t; getchar(); string blank; getline(cin,blank);

	while(t--){

	 	string plain , subs ;

	 	getline(cin,plain); getline(cin,subs);

	 	cout<<subs<<'\n'<<plain<<'\n';

	 	string in ;

	 	while(getline(cin,in)){

	 		if(in.length()==0)
	 			break;

	 		for(int i = 0  ,size = in.length() ; i<size ; ++i){

	 			int pos  = -1;

	 			for(int j = 0 , size2 = plain.size() ; j<size2 ; ++j){
	 				if(plain[j]==in[i]){
	 					pos = j ; break;
	 				}
	 			}

	 			if(pos!=-1)
	 				cout<<subs[pos];
	 			else
	 				cout<<in[i];
	 		}
	 		cout<<'\n';
	 	}

	 	if(t!=0)
	 	cout<<'\n';

	}

	return 0 ;
}