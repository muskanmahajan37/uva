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

	string in = "H3LL0 MY L0V3, 1 M H499Y 83C4U53 500N 1 W1LL 83 70 Y0UR 51D3. 7H1571M3 W17H0U7 Y0U H45 833N 373RN4L. 1 1NV173 Y0U 70 7H3 200 0N3 70533 7H3 238R45 4ND 60R1L45.";
	string ou = "HELLO MY LOVE, I M HAPPY BECAUSE SOON I WILL BE TO YOUR SIDE. THISTIME WITHOUT YOU HAS BEEN ETERNAL. I INVITE YOU TO THE ZOO ONE TOSEE THE ZEBRAS AND GORILAS";

	int len = in.length();

	set< pair<char,char> >res ;


	for(int i =0 ; i<len ; i++){

		if(in[i]>='0' && in[i]<='9'){
			res.insert(mp(in[i],ou[i]));
		}
	}

	for(pair<char,char> c : res)
		cout<<c.first;

	cout<<endl;

	for(pair<char,char> c : res)
		cout<<c.second;

	cout<<endl;

	return 0 ;
}