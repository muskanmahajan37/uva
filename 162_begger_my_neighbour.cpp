/*
* @Author: eleven
* @Date:   2018-01-24 19:24:06
* @Last Modified by:   eleven
* @Last Modified time: 2018-01-24 20:18:23
*/
#include <bits/stdc++.h>

using namespace std;

stack<string> dealer;
stack<string> non_dealer;
stack<string> dec;


int high_hand(string in){

	if(in=="HA" || in =="DA" || in =="CA" || in =="SA")
		return 4 ; 
	else if(in=="HK" || in =="DK" || in =="CK" || in =="SK")
		return 3 ; 
	else if(in=="HQ" || in =="DQ" || in =="CQ" || in =="SQ")
		return 2 ;
	else  if(in=="HJ" || in =="DJ" || in =="CJ" || in =="SJ")
		return 1 ;

	return 0 ; 
}

int high_call(int who , int handvalue){

	if(who==1){
		while(!non_dealer.empty() && handvalue--){
			
		}
	}

}

int main(){


	freopen("in","r",stdin);
	freopen("out","w",stdout);

	string in; 

	while(true){

		cin>>in ; 

		if(in=="#")
			return 0 ;  

		non_dealer.push(in);

		for(int i = 2 ; i<=52 ; ++i){

			cin>>in;

			if(i%2==0)
				dealer.push(in);
			else
				non_dealer.push(in);

		}

		bool gameover = false;

		string temp ; 

		int handvalue = 0 ; 

		while(gameover==false){

			if(non_dealer.empty()){
				cout<<"1 "<<dealer.size()<<endl;
				break;
			}

			if(dealer.empty()){
				cout<<"2 "<<non_dealer.size()<<endl;
				break;
			}

			temp = dealer.top(); dealer.pop();

			handvalue = high_hand(temp);

			dec.push(temp);

			handvalue = high_hand(temp);



		}


	}

	return 0 ;
}