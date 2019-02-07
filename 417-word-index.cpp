//Status :
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

	map<char ,int>dic;

	char c = 'a' ; 

	for(int i = 1 ; i<=26 ; ++i)
		dic[c++]=i;
	

	string word;

	while(cin>>word){

		bool valid =true;

		int len = word.length();

		for(int i = 0; i<len-1 ; ++i){

			if(1!=(int)(word[i+1]-word[i])){
				valid = false; break;
			}
		}

		if(!valid)
			cout<<0<<endl;
		else{

			for(int i = 0; i<len ; ++i){


			}

		}

	}



	return 0 ;
}
