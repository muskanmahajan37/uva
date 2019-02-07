#include <bits/stdc++.h>


using namespace std;

bool compare(pair<int,int> p1 , pair<int,int> p2){

	if(p1.second>p2.first)
		return true;
	if(p1.second==p2.first && p1.second>p2.second)
		return true;

	return false;
}

int main(){

	string in;

	int x = 0;

	while(getline(cin,in)){

		if(x!=0)
			cout<<"\n";

		if(in.empty())
			break;

		map<char,int>tree;

		int len = in.length();


		for(int i = 0 ;i<len ; ++i){

			auto it = tree.find(in[i]);

			if(it==tree.end())
				tree[in[i]] = 1 ;
			else
				it->second++;
		}


		vector<pair < int , int> >res;


		for(auto i : tree)
			res.push_back(make_pair(i.second,(int)i.first));

		sort(res.begin(),res.end());

		for(auto i : res)
			cout<<i.second<<" "<<i.first<<'\n';

		++x;

	}





	return 0 ;
}