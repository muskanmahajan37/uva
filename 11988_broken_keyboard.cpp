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

	string tmp;

	while(getline(cin,tmp)){

		stack<string>s;

		int len = tmp.length();

		string res="";

		for(int i =0 ; i<len ; ++i){

			if(tmp[i]=='['){

				string p;

				while(tmp[i]=='[')
					++i;


				int j = 0;

				int sindex = i;

				while(tmp[i]!=']'){
					++j;
					++i;
				}

				if(j>1){
					p = tmp.substr(sindex,j);
					s.push(p);
				}

			}

			if(tmp[i]!=']')
				res +=tmp[i];
		}

		while(!s.empty()){
			cout<<s.top();
			s.pop();
		}

		cout<<res<<"\n";
	}	



	return 0 ;
}
