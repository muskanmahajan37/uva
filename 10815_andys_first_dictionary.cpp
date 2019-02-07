/*
* @Author: eleven
* @Date:   2018-04-27 12:10:08
* @Last Modified by:   eleven
* @Last Modified time: 2018-04-29 21:20:42
* @Status : AC
*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<string>data;

	string tmp;

	while(getline(cin,tmp)){

		data.push_back(tmp);
	}

	int size = data.size();

	set<string>dic; 

	for(int i = 0; i<size ; ++i){

		int len = data[i].length();

		for(int j = 0; j<len ; ++j){

			string tmp;

			if(isalpha(data[i][j])){
		
				while(isalpha(data[i][j])){

					tmp.push_back(tolower(data[i][j]));

					++j;

			}

				if(dic.find(tmp)==dic.end())
					dic.insert(tmp);
			}
		}

	}


	for(auto i : dic)
		cout<<i<<"\n";


	return 0 ;
}