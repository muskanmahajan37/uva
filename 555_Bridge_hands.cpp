#include <bits\stdc++.h>


using namespace std;

int main(){

	char dealer;
	String input;
	char end = NULL;


	while(true){
	    
		cin>>dealer>>input ; 

		vector<string> E;
		vector<string> W;
		vector<string> N;
		vector<string> S;
		
		//deal the card


		if(dealer =='S'){

		   int size = input.size();

		   for(int i = 0 ; i<size ; i+=4){
			
			  W.push_back(input.substr( i , i+2));

			
	         }

             for(int i = 1 ; i<size ; i+=4)
			  N.push_back(input.substr( i , i+2));

		   for(int i = 2 ; i<size ; i+=4)
			  E.push_back(input.substr( i , i+2));

		   for(int i = 3 ; i<size ; i+=4)
			  S.push_back(input.substr( i , i+2));
		 }
	     else if(dealer =='E'){

		   int size = input.size();

		   for(int i = 0 ; i<size ; i+=4)
			  S.push_back(input.substr( i , i+2));

             for(int i = 1 ; i<size ; i+=4)
			  W.push_back(input.substr( i , i+2));

		   for(int i = 2 ; i<size ; i+=4)
			  N.push_back(input.substr( i , i+2));

		   for(int i = 3 ; i<size ; i+=4)
			  E.push_back(input.substr( i , i+2));
		 }
		else if(dealer =='N'){

		   int size = input.size();

		   for(int i = 0 ; i<size ; i+=4)
			  E.push_back(input.substr( i , i+2));

             for(int i = 1 ; i<size ; i+=4)
			  S.push_back(input.substr( i , i+2));

		   for(int i = 2 ; i<size ; i+=4)
			  W.push_back(input.substr( i , i+2));

		   for(int i = 3 ; i<size ; i+=4)
			  N.push_back(input.substr( i , i+2));
		 }
		else if(dealer =='W'){

		   int size = input.size();

		   for(int i = 0 ; i<size ; i+=4)
			  N.push_back(input.substr( i , i+2));

             for(int i = 1 ; i<size ; i+=4)
			  E.push_back(input.substr( i , i+2));

		   for(int i = 2 ; i<size ; i+=4)
			  S.push_back(input.substr( i , i+2));

		   for(int i = 3 ; i<size ; i+=4)
			  W.push_back(input.substr( i , i+2));
		}
         		
	   }   



return  0 ;

}