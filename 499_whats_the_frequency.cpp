#include <bits/stdc++.h>


using namespace std;

#define vint vector<int>
#define pb push_back
#define str_int pair<string , int>
#define pb make_pair

bool isequal(char e, char temp){

	return e == temp;
}

int main(){


	string input;

	while(getline(cin ,input)){

		str_int l_frequency;

		for(int i = 0 ; i<input.length(); ++i){
			char temp = input[i]; int count = 0 ;
			for(int j = 0 ; j<input.length() ; ++j){
				if(temp == input[j]){
					
					count++;
				}
			}
			

		}

	}


	

	return 0 ;
}