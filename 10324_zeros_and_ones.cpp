
// Status :AC

#include<iostream>
#include<string.h>
#include<stdio.h>
#include <algorithm>

using namespace std;


int main(){

	char string[ 1000002];
	int kase = 0 ;

	while((scanf("%s",string))==1){

		int test , i , j  ;

		cin>>test; 

		cout<<"Case "<<++kase<<":"<<endl;	

		while(test--){  

		    int signal = 1 ;

		    
			cin>>i>>j; 

			if(i>j)
			   swap(i,j);

			char temp = string[i];
			
			for( ; i<=j ; i++){
				if(string[i]!=temp)
					{
						signal=0;
						break;
					}
			}


			if(signal==1)
				cout<<"Yes"<<endl;
			else 
				cout<<"No"<<endl;

		}
		

	}
	return 0;
}