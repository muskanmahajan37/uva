#include <bits/stdc++.h>

using namespace std;


int main(){


int n ;

while(scanf("%d",&n)!=EOF){
     
	int pay = 0 ;
	
	int temp = 1 ;


	while((temp<<1)<=n){

		temp = temp<<1;
	}	

	int winner ;

	if(temp==n){
	  	
		cout<<n-1<<endl ;	  	
	}
	else{

		int l = n - temp;

		winner = 2*l+1;

		pay+= n - winner;

		n = winner;

		temp = 1; 

		while((temp<<1)<=n){
	      	temp = temp<<1;
      	}	

      	if(temp == n)
		  cout<<pay+n-1<<endl;
		else{
								
			l = n - temp;

			winner = 2*l+1;

        		pay+= n-winner ;
        		
			pay+=2*winner ;
					
			cout<<pay<<endl;	
		
		}
		  

	}
					

}

return 0 ;

}  