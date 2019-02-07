#include<iostream>
#include<stdio.h>

using namespace std;

struct site{

char site_name[200];
int rel ;

};

int main(){

	int test;
	



	
        cin>>test; int kase = 0 ; 
	
	struct site var[10];
	
	while(test--){
	
	for(int i = 0 ; i<10 ; i++)
	   {
		cin>>var[i].site_name;
		cin>>var[i].rel ;
		
	    }
	
	int highest_rel  = var[0].rel;

	for(int i = 1 ; i<10 ;i++)
	   if(var[i].rel>highest_rel)
	      highest_rel = var[i].rel;
	
	cout<<"Case #"<<++kase<<":"<<endl;
	for(int i = 0 ; i<10 ; i++)
	      if(highest_rel== var[i].rel)
		   cout<<var[i].site_name<<endl;
	
	   }

	
return 0 ;
}


	    









