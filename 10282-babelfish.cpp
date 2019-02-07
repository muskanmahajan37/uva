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

int main(){

	
	string tmp;
	map<string,string>dic;
	while(getline(cin,tmp)){
		

		if(tmp.empty()){

			while(getline(cin,tmp)){

				map<string,string>::iterator it = dic.find(tmp);

				if(it==dic.end())
					cout<<"eh\n";
				else
					cout<<it->second<<"\n";
			}

			return 0 ;

		}


		int len = tmp.length();

		int b = -1;

		for(int i = 0; i<len ; ++i){

			if(tmp[i]== ' '){
				b=i ; break;
			}
		}	


		string eng = tmp.substr(0,b);
		string tras = tmp.substr(b+1,len+1);

		dic[tras] = eng;

	}	



	return 0 ;
}
