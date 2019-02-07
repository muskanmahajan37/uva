#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
	int x , y ; 

	while(scanf("%d%d",&x,&y)==2){
		
		if(x==-1 && y==-1)
		  break;
	
		int temp = abs(x-y);
		
		if(temp>50)
		   cout<<100-temp<<endl;
		else
		   cout<<temp<<endl; 
	  }
return 0;
}
	     
	    
	     	
