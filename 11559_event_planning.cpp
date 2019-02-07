#include<iostream>

using namespace std;

int main(void){
	
        int n, b,h ,w ;

	while(cin>>n>>b>>h>>w){

	   int p , a , cost = 0 ;
		
	   for(int i = 0 ; i<h ; i++){

		cin>>p;
		
		for(int j = 0 ; j<w ; j++){
		     cin>>a ; 
		
		if(a>=n && n*p<=b){
		   if(cost==0)
			cost = n*p;
		   else if(cost> n*p)
			 cost = n*p;	   		
		}
	      }
	   }	
	  
	cost==0? cout<<"stay home"<<endl : cout<<cost<<endl;
     }
     return 0;	
}	      		

	


