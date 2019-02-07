/*
* @Author: eleven
* @Date:   2018-01-27 17:07:27
* @Last Modified by:   eleven
* @Last Modified time: 2018-01-27 17:47:54
*/
#include <bits/stdc++.h>

using namespace std;

void digit(char c){

	if(c=='1')
		cout<<"`";
	else if(c=='-')
		cout<<0;
	else if(c=='=')
		cout<<"-";
	else
		cout<<--c;
}


int main(){

	string input ;

	while(getline(cin,input)){


		int len = input.length();


		for(int i = 0 ; i<len ; ++i){

			if(isdigit(input[i])){
				digit(input[i]);
			}
		}

		cout<<endl;

	}




	return 0 ;
}