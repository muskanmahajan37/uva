//1.32 AM << 22 JUNE << 2017 << Gobindagonj 


#include <iostream>
#include <cstdio>


using namespace std;

int main(){



	int n , set = 0;

	while(cin>> n){


		if(n==0)
			return 0 ;

		int arr[n] , sum = 0 , total_moves = 0 ;


		for(int i = 0; i<n ; i++){

			cin>>arr[i];

			sum += arr[i];
		}


		int avg = sum /n ;


		for(int i  = 0;i<n ; i++){

			if(arr[i] < avg){

				total_moves += (avg-arr[i]);
			}
		}

		printf("Set #%d\nThe minimum number of moves is %d.\n\n",++set,total_moves);

	}





	return 0;
}
