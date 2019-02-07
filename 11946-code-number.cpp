//Status:AC
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

	int t ;
	cin>>t; getchar();

	string number = "0123456789";
	string character = "OIZEASGTBP";

	while(t--){

		string in ;

		while(getline(cin,in)){

			for(char c : in){

				if(c>='0' && c<='9')
					cout<<character[(int)c-48];
				else
					cout<<c;
			}

			cout<<endl;
		}


	}


	return 0 ;
}