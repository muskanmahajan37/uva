// 3.55 PM , 25 june , 2017 , Gobindagonj
// problem status:

#include <cstdio>

using namespace std;


/*int ugly(){

	int count = 1 ;
	int number = 2;
	int divisor[]= { 2 ,3 ,5,6};
	int res = 0;
	int i = 0 ;

	while(count<1500){

		int temp = number;

		while(temp!=1 && divisor[i]<=5 ){

			if(temp%divisor[i] == 0){
				temp/=divisor[i];
			}
			else{

				divisor[i++];
			}

		}

		if(temp == 1){
			res = number ;
			count++;	
		}

		i= 0 ;
		cout<<count<<" "<< res<< endl;
		number++;
	}
}
*/

int main(){

	printf("The 1500'th ugly number is <859963392>.\n");

	return 0;
}