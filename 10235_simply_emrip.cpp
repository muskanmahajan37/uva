// 30 June , 12.48 PM , 2017 , Gobindagonj 

// problem status : accepted


#include <iostream>
#include <cstdio>

using namespace std;

bool isprime(int x){

	if(x<=1)
	 	return false;

	else if(x%2==0 || x%3==0)
	 	return false;

	for(int i = 5  ; i*i<=x ; i++)
	 	if(x%i==0 || x%(i+2)==0)
	 	   return false;

	return true;
}


bool emrip(int x){

	int reverse = 0;

	int temp = x; 

	while(temp!=0){

		reverse = reverse*10 + temp%10; 

		temp/=10;

	}

	if(isprime(x) && isprime(reverse) && reverse!=x)
	  return true;

	return false;		

}



int main(){

	int n ;


	while(scanf("%d",&n)==1){

		if(emrip(n))
			printf("%d is emirp.\n",n);
		else if(isprime(n))
			printf("%d is prime.\n",n);
		else
			printf("%d is not prime.\n",n);

	}


	return 0 ;
}