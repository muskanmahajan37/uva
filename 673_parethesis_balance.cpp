/*
* @Author: eleven
* @Date:   2018-05-01 03:43:41
* @Last Modified by:   eleven
* @Last Modified time: 2018-05-01 04:35:04
* @Status : AC \\ Use getline() instead of cin in order to read an empty string -_-
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n ;
	cin>>n; getchar();

	for(int i = 0; i<n ; ++i){

		string in ;

		getline(cin,in);

		stack<char>st;

		int len = in.length();


		for(int j = 0 ; j<len ; ++j){

			if(in[j]=='(' || in[j]=='[')
				st.push(in[j]);
			else if(!st.empty() && in[j]==')' && st.top()=='(')
				st.pop();
			else if(!st.empty() && in[j]==']' && st.top()=='[')
				st.pop();
			else
				st.push(in[j]);	
		}


		if(st.empty())
			cout<<"Yes\n";
		else
			cout<<"No\n";

	
	}



	return 0 ;
}