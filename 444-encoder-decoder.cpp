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

bool isvalid(int x){

	int arr[]={32,33,44,46,58,59,63};

	for(int i = 0; i<7 ; ++i)
		if(x==arr[i])
			return true;

		return (x>=65 && x<=90) || (x>=97 && x<=122);

	}

int main(){

	string in ;

	while(getline(cin,in)){

		if(isalpha(in[0])){

			reverse(in.begin(),in.end());

			for(char c : in){

				string tmp = to_string((int)c);

				reverse(tmp.begin(),tmp.end());
				cout<<tmp;
			}

			cout<<endl;
		}
		else{
			reverse(in.begin(),in.end());

			int len = in.length();


			for(int i = 0; i<len-1 ; ++i){

				string tmp; 
				tmp.pb(in[i]) ; tmp.pb(in[i+1]);

				int ascii = stoi(tmp);

				if(isvalid(ascii)){
					cout<<(char)ascii; ++i;
				}
				else{

					tmp.pb(in[i+2]);
					ascii  = stoi(tmp);
					cout<<(char)ascii; i+=2;
				}				
			}

			cout<<endl;

		}

		


	}




	return 0 ;
}
