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

	int a , b ; char c;

	char in[1000000];

	while(cin.getline(in,1000000)){

			cout<<in<<'\n';

			sscanf(in,"%d %c %d",&a,&c,&b);

			bool first = false,second = false;

			int alen = 0 , blen = 0;

			int len = strlen(in);

			int index = -1; 

			for(int i = 0; i<len ; ++i){

				if(!isdigit(in[i])){
					index = i ; break;
				}
			}	

			alen = index;
			blen = len - index - 3;


			if(a<=0 && alen>=2){
				cout<<"first number too big\n"; first = true;
			}

			if(b<=0 && blen>=2){
				cout<<"second number too big\n"; second = true;
			}

			int res  = 0;

			if(c=='*')
				res = a*b;
			else 
				res = a+b;


			if((res<=0  || first || second) && a!=0 && b!=0)
				cout<<"result too big\n";

	}


	return 0 ;
}
