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

	string row[3];

	row[0] = "qwertyuiop[]";
	row[1] ="asdfghjkl;'";
	row[2] = "zxcvbnm,.";



	string in ;

	while(getline(cin,in)){

		int len  = in.length();

		for(int i = 0; i<len ; ++i){

			bool print = false;

			for(int j = 0 ; j<3; ++j){

				int len2  = row[j].length();

				for(int k = 0; k<len2 ; ++k){

					if((row[j][k]==in[i] || toupper(row[j][k])==in[i]) && k-2>=0){
							
						if(isupper(in[i]))
							cout<<(char)toupper(row[j][k-2]);
						else
							cout<<row[j][k-2];

						print = true;
					}
				}

			}

			if(!print)
				cout<<in[i];
		}

		cout<<"\n";

	}

	





return 0 ;
}
