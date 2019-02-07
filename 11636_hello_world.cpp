/*
* @Author: eleven
* @Date:   2018-05-01 14:47:21
* @Last Modified by:   eleven
* @Last Modified time: 2018-05-01 15:14:13
*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int n ;
	int kase =0;

	while(cin>>n){


		if(n<0)
			return 0;

		cout<<"Case "<<++kase<<": "<<ceil(log2(n))<<endl;


	}

	return 0 ;
}