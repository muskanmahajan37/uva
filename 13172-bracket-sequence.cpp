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

bool isopen(char c){

	return c== '<' || c=='{' || c=='(' || c=='[';
}

bool indentical(char c , char c2){

	return (c=='<' && c2=='>') || (c=='{' && c2=='}') ||
			(c=='[' && c2==']') || (c=='(' && c2==')');

}

int main(){

	int n ;

	cin>>n;

	for(int i =  0; i<n ; ++i){


		string tmp;

		cin>>tmp;

		int len = tmp.length();


		printf("Case %d:\n",i+1);

		for(int j =0  ; j<len ; ++j){

			stack<char>s;

			int count = 0 ;

			int k = j;

			if(isopen(tmp[k])){

				s.push(tmp[k]);

				k++;

				while(!s.empty()){

					if(isopen(tmp[k]))
						s.push(tmp[k]);
					else if(indentical(s.top(),tmp[k])){
						count+=2;
						s.pop();
					}
					else
						break;					
				}
				
			}

			cout<<count<<"\n";
		}

	}
	



	return 0 ;
}
