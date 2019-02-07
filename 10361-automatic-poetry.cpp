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
	cin>>n; getchar();


	while(n--){

		string first , sec;
		getline(cin,first);
		getline(cin,sec);

		vector<string>l; int x = 0;

		for(int i = 0 , size = first.length(); i<size ; ++i){
			
			if(first[i]!='<' && first[i]!='>')
				cout<<first[i];

			if(first[i]=='<'){
				string tmp ;
				while(first[++i]!='>' && i<size)
					tmp.pb(first[i]);

				l.pb(tmp);

				
				string tmp2 ;

				while(first[++i]!=' ' && i<size)
					tmp2.pb(first[i]);

				l.pb(tmp2);

				cout<<tmp<<tmp2;

				if(x==0)
					cout<<" ";
				++x;
			}	
		}

		cout<<endl;

		for(int i = 0 ,size = sec.length() ; i<size ; ++i){

			if(sec[i]!='.')
				cout<<sec[i];
			else{
				if(l.size()==4)
				cout<<l[2]<<l[1]<<" "<<l[0]<<l[3]<<endl; break;
			}
		}

	}



	return 0 ;
}