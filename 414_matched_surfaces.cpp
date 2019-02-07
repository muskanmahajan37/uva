//Status : AC

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n ; 

	while(cin>>n){

		getchar();

		if(n==0)
			return 0 ;


		vector<string>img;

		for(int i = 0; i<n ; ++i){

			string in ; 

			getline(cin, in);

			img.push_back(in);
		}

		vector<int>len;

		for(int i = 0; i<n ; ++i){

			int count = 0 ;

			for(int j = 0 ; j<25 ; ++j){

				if(img[i][j] == 'X')
					count++;
			}

			len.push_back(count);

		}

		int max = *max_element(len.begin(),len.end());


		int res  = 0 ;

		for(auto i : len){

			res += max-i;

		}

		cout<<res<<endl;

	}




	return 0 ;
}