#include <bits/stdc++.h>


using namespace std;

bool isperfect(int p){

	return p == 2 || p==3 || p==5 || p==7 || p==13 || p==17; 	  
        
}


int main(){

     int n ; 

	cin>>n ;

	int p ; 

	for(int i = 0 ;i<n ; i++){
			
		cin>>p;

		getchar();  

		if(isperfect(p))
		   cout<<"Yes\n";
		else
		   cout<<"No\n";     		
	     
	}




	return 0 ;
}
