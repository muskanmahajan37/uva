#include <bits/stdc++.h>

using namespace std;

#define vint vector<int>
#define pb push_back

int main(){

	char c ;

	while(true){

		int len ;

		cin >>len ; 

		if(len ==0 )
			return 0 ;

		int min = INT_MAX;
		int count = 1;
		char prev = 'A';

		for(int i =0 ; i<len ; ++i){
			
			cin>>c;
			
			if(c=='R' && prev=='D' && min>count){
				min = count; count = 1 ;
				prev = c; 
			}
			else if(c=='D' && prev=='R' && min>count){
				min = count; count = 1 ;
				prev = c; 
			}
			else if(c=='R' && prev == 'D'){
				count = 1 ;
				prev  = c;
			}
			else if(c=='D' && prev == 'R'){
				count = 1 ;
				prev  = c;
			}
			else if(c=='D' && prev == 'A'){
				prev =c ; 
				count = 1;
			}
			else if(c=='R' && prev == 'A'){
				prev = c;
				count = 1;
			}
			else if(c=='Z')
				min = 0 ;
			else
				count++;
				
		}

		cout<<min<<endl;
	}
	

	return 0 ;
		
}