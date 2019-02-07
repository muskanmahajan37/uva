#include <bits/stdc++.h>

using namespace std;

#define vint vector<int>
#define pb push_back


int main(){

	while(true){

		string input ; 

		getline(cin , input);

		if(input.compare("DONE")==0)
			return 0 ;

		input.erase(remove_if(input.begin(), input.end(),[]
			(char c){
				return c=='.' || c==',' || c=='?' || c=='!' || c==' ' ;
			}),input.end());

		for(int i = 0 , len = input.length(); i<len ; ++i)
			if(isupper(input[i]))
				input[i]=tolower(input[i]);

		string temp(input);

		reverse(temp.begin(),temp.end());

		if(input.compare(temp)==0)
			cout<<"You won't be eaten!"<<endl;
		else 
			cout<<"Uh oh.."<<endl;

	}


	

	return 0 ;
}