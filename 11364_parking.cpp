#include<iostream>

using namespace std;

void swap( int *x , int *y)
{
	*x = *x+*y;
	*y = *x-*y;
	*x = *x-*y;
}

int main(){

	int t; 
	cin>>t;


	while(t--){
		int n;
		cin>>n;

		int array[n];
		for(int i=0 ;i<n ; i++)
			cin>>array[i];	
		

		for(int i = 0 ; i<n-1 ; i++)
			for(int j= 0 ; j<n-i-1; j++)
				if(array[j]>array[j+1])
					swap(&array[j], &array[j+1]);
			


		int total_distance= 0;

		for(int i = 0 ;i<n-1 ;i++){

			int temp = array[i+1]-array[i];
			total_distance+=temp;
		}
		total_distance+=array[n-1]-array[0];
		cout<<total_distance<<endl;
			
	}

}