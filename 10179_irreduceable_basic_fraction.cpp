#include <bits/stdc++.h>

using namespace std;

int gcd(int x , int y){

	if(x%y==0)
		return y;
	
	return gcd(y , x%y);

}

int totalIrr(int n){

	int count = 1;


	for(int i = 2 ; i<n ; i++){

	  	if(gcd(n , i)==1)
			count++;
	  }
	return  count;
}

bool isprime(int x){

	int limit = (int)(sqrt(x)+1);
	
	for(int i =2 ; i<=limit ; i++)
		if(x%i==0)
			return false;
	return true;
}


int main(){

	int n ;
	
	while(scanf("%d",&n)){

		if(n==0)
		    return 0 ;	
	   if(n%2==0)
	     printf("%d\n",totalIrr(n));
	   else{
	   		if(isprime(n))
				printf("%d\n",n-1);
			
			else{

				printf("%d\n",totalIrr(n));
			}	
		
	   }

	}



	return 0;
}