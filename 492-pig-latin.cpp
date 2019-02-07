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

bool isvowel(char c){

	string vowel = "aeiouAEIOU";

	return find(vowel.begin(),vowel.end(),c)!=vowel.end();
}


int main(){

	string line;

	while(getline(cin,line)){

		int len = line.length();

		vi v;

		v.pb(0);
		for(int i = 0; i<len ; ++i){
			if(line[i]==' ')
				v.pb(i+1);
		}
		v.pb(len+1);
		int size = v.size();

		vector<string>word;

		int size = v.size();

		for(int i = 0; i<size ; ++i){


		}

		
	}


	return 0 ;
}
