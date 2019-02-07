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
typedef vector<int> vi; //C, G, J, K, Q, S, X, or Z

int val(char c){

	if(c=='B' || c=='F'|| c=='P'|| c=='V')
		return 1;
	else if(c=='C' || c=='G' ||c=='J' ||c=='K' ||c=='Q' ||c=='S' ||c=='X' ||c=='Z')
		return 2;
	else if(c=='D' || c=='T')
		return 3;
	else if(c=='L')
		return 4;
	else if(c=='M' ||c=='N')
		return 5;
	else if(c=='R')
		return 6;

	return -1;

}

int main(){

	string in;
	
	while(getline(cin,in)){

		int len = in.length();

		int count = 0;

		for(int i =0 ; i<len-1 ; ++i){

			int x = val(in[i]);
			int y = val(in[i+1]);

			if(x==y && x!=-1 && y!=-1){

				for(int j = i ; j<len-1 ; ++j){
					in[j] = in[j+1];
				}
				len--;
				i--;
			}

		}

		in.resize(len);

		for(int i = 0 ; i<len ; ++i){

			int x = val(in[i]);

			if(x!=-1)
				cout<<x;
		}

		cout<<"\n";
	}



	return 0 ;
}
