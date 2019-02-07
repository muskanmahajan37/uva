#include <bits/stdc++.h>


using namespace std;

int main(){


	int t ;
	cin>>t ;
	while(t--){

		getchar();

		string in;

		getline(cin,in);

		int len = in.length();

		map<char , char> treemap;

		int m;

		cin>>m; getchar();

		while(m--){
			
			char c1 ,c2;
			cin>>c1>>c2;

			treemap[c2] = c1;
		}

		getchar();



		for(int i = 0; i<len ; ++i){

			auto it = treemap.find(in[i]);

			if(it!=treemap.end())
				in[i] = it->second;
		}

		cout<<in<<endl;
	}





	return 0 ;
}