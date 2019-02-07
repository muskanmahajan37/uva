/*
* @Author: eleven
* @Date:   2018-04-27 12:23:37
* @Last Modified by:   eleven
* @Last Modified time: 2018-07-24 02:40:19
*/

#include <bits/stdc++.h>

using namespace std;

int main(){


	int n ;

	while(cin>>n){

		if(n==0)
			return 0 ;

		int count = 2;

		int i = 2;

		int lim = n/2 ;

		while(i<=lim){

			if(n%i==0){	
				count++;
			}

			i++;
		}

		if(count%2==0)
			cout<<"no\n";
		else 
			cout<<"yes\n";


	}



	return 0;
}