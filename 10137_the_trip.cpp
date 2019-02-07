// 6.07 pm , 10  July , 2017 , Mirbagh Dhaka

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n ; 

	while(true){

		cin >> n ; 

		long arr[n];
		double temp ;
		double total= 0 ;
		long  avg  ; 

		if(n ==0 )
		   return 0 ; 

		for(int i = 0 ; i<n ; i++){

			cin>> temp ;
			arr[i] = temp * 100 ; 
			total += arr[i];

		}

		avg = ceil(total/n);

		long exchange =0;

		for(int  i = 0  ; i< n ; i++){
			
			if(arr[i]>avg)
				exchange += arr[i] - avg ;

		}

		double res = (double)exchange/100;

		printf("$%0.2lf\n",res);
		
	}
	
	return 0 ;

}
