#include <bits/stdc++.h>


using namespace std;


int main(){


	int a , l ; int tmp;
	int kase = 0 ;

	while(cin>>a>>l){

		tmp = a;

		if(a<0 && l<0)
			break;

		int count = 1;


		while(a!=1 && a<=l){

			
			if(a%2==0)
				a/=2;
			
			else 
				a = a*3+1 ;

			if(a<0)
				break;

			if(a<=l)
				count++;

		}

		printf("Case %d: A = %d, limit = %d, number of terms = %d\n",++kase,tmp,l,count);

	}




	return 0 ;
}