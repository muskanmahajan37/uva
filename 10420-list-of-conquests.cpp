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

	int n ;

	cin>>n; getchar();	

	char country[100],name[100];

	map<string ,int>lovmap;

	while(n--){


		scanf("%s %[^\n]s",country,name);

		map<string,int>::iterator it = lovmap.find(country);

		if(it==lovmap.end())
			lovmap[country] = 1 ;
		else
			it->second++;
			
	}

	for(pair<string,int> p :lovmap)
		cout<<p.first<<" "<<p.second<<"\n";



	return 0 ;
}
