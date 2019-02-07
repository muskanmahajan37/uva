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

bool isvowel(char c){

	c = toupper(c);

	return c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
}

int main(){

	string in;

	while(getline(cin,in)){


		for(int i = 0 ,len = in.length() ; i<len ; ++i){

			if(isvowel(in[i])){

				while(isalpha(in[i]) && i<len){
					cout<<in[i] ; ++i;
				}

				if(in[i]==' '){
					cout<<"ay"<<in[i]; 
				}
				else{
					cout<<"ay"<<in[i]
				}
			}
			else{


				char c = in[i] ; ++i;

				while(isalpha(in[i]) && i<len){
					cout<<in[i] ; ++i;
				}

				if(in[i]==' '){
					cout<<c<<"ay"<<in[i]; 
				}
				else{
					cout<<c<<"ay"<<in[i];
				}


			}
		}

		cout<<'\n';
	}


	return 0 ;
}