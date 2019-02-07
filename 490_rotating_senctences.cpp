#include <bits/stdc++.h>

using namespace std;


int main(){


	vector<string>in;

	string tmp;

	int count = 0;

	int largest = -1;

	while(getline(cin,tmp)){

		in.push_back(tmp); ++count;

		int len = tmp.length();

		if(largest<len)
			largest = len;
	}

	for(int i = 0 ; i<largest ; ++i ){

		for(int j = count-1 ;j>=0 ; --j){

			if(in[j].begin()+i < in[j].end())
				cout<<in[j][i];
			else
				cout<<' ';
		}
		
		cout<<"\n";

	}


	return 0;
}