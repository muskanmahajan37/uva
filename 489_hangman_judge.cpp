/*
* @Author: eleven
* @Date:   2017-11-03 14:01:38
* @Last Modified by:   eleven
* @Last Modified time: 2018-04-05 22:31:44
*/
#include <bits/stdc++.h>

using namespace std;

string input ;


int main(){

	int round ; 


	while(cin>>round){

		if(round==-1)
			return  0 ;

		string given;
		string guess;

		

		cin>>given>>guess;

		int stroke = 7;

		int len = guess.length();

		int len2 = given.length();

		for(int i = 0 ; i<len && stroke>0 && !given.empty(); ++i){

			if(given.find(guess[i])!=string::npos){

					given.erase(remove(given.begin(), given.end(),
                                      guess[i]),
                               given.end());
				}
			else
				stroke--;

		}

		cout<<"Round "<<round<<"\n";


		if(stroke<=0)
			cout<<"You lose.\n";
		else if(given.empty() && stroke>0)
			cout<<"You win\n";
		else
			cout<<"You chickened out\n";
		
		
	}


	return 0 ; 
}