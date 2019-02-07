/*
* @Author: eleven
* @Date:   2018-01-26 02:00:28
* @Last Modified by:   eleven
* @Last Modified time: 2018-01-26 14:56:54
*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int n ; 

	cin>>n ;

	int k;

	while(n--){

		cin>>k ;

		int  limit = 2*k;
		int upper = k*(k+1);

		for(int i =k+1 ; i<=limit ; ++i){

			if(i*upper == k*(i+upper)){
				cout<<"1/"<<k<<" = "<<"1/"<<upper<<" + "<<"1/"
				<<i<<"\n";
				upper-- ;
			}
			else{

				int temp = upper ;

				while(i*temp != k*(i+temp) && temp>0){
					temp--;

				}

				if(temp == 0) continue ; 

				upper = temp ;

				cout<<"1/"<<k<<" = "<<"1/"<<upper<<" + "<<"1/"
				<<i<<"\n";
			}
		} 
	}



	return 0 ; 
}