/*
* @Author: eleven
* @Date:   2018-04-29 23:34:22
* @Last Modified by:   eleven
* @Last Modified time: 2018-04-29 23:37:14
*/
#include <bits/stdc++.h>

using namespace std;

int main(){


	int m , n;

	while(cin>>m>>n){


		int total = 0 ;

		if(m>=n)
			total+=m-1+m*(n-1);
		else 
			total+=n-1+n*(m-1);

		cout<<total<<endl;

	}





	return 0;
}