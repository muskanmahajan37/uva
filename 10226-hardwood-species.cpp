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

	cin>>n; getchar(); getchar();

	while(n--){

		map<string,int>tree;

		string tmp; int total = 0;

		while(getline(cin,tmp)){

			if(tmp.empty())
				break;

			map<string,int>::iterator it = tree.find(tmp);

			if(it==tree.end())
				tree[tmp] = 1;

			else
				it->second++;

			total++;

		}

		for(pair<string,int>i : tree)
			cout<<i.first<<" "<<setprecision(4)<<fixed<<(i.second*100.0)/total<<"\n";

		if(n!=0)
			cout<<endl;

	}
	



	return 0 ;
}
