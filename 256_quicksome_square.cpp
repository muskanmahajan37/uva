/*
* @Author: eleven
* @Date:   2018-01-26 12:57:26
* @Last Modified by:   eleven
* @Last Modified time: 2018-01-26 13:42:28
*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int n ; 

	while(cin>>n){
		
		int limit = pow(10,n) , a,b  , tmp; 

		int count = 0 ;

		while(count<limit){

			  a = count % (int)pow(10,n/2);

			  b = count /(int) pow(10,n/2);

			  if(pow(a+b,2)==count){
			  	tmp = count;
			  	for(int i = 0 ; i<n ++i){
			  		cout<<tmp%10
			  	}
			  }

			  count++;
		}

	}

	return 0 ; 
}