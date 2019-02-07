#include <bits/stdc++.h>

using namespace std;

#define vint vector<int>
#define pb push_back

int main(){

	 string input; 

	 while(cin>>input){

	 	int len = input.length();
	 	int half  = len/2 -1;

	 	int count = 0 ; 

	 	for(int i = 0 ; i<len-1; ++i){
	 		bool ispal = true;
	 		for(int j = i , k = len - 1 ; j<=half ; ++j ,--k){
	 			if(input[k]==input[j])
	 				continue;
	 			else{
	 				ispal = false;
	 				break;
	 			}
	 		}
	 		if(ispal==true)
	 			count++;
	 	}

	 	cout<<count<<endl;


	 }

	return 0 ;
}