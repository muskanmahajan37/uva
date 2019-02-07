// 3.32 PM , 25 June , 2017 , Gobindagonj 

// problem status : accepted


#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int swapping(int arr[] , int size){

	int count  = 0 ; int temp;

	for(int i = 0 ; i<size ; i++)
		for(int j= 0 ; j < size - i -1 ; j++)
			if(arr[j] > arr[j+1]){

				swap(arr[j] , arr[j+1]);
				
				count++;
			}

	return count;
}

int main(){

	int test;

	cin>> test;

	int size ;

	for(int i = 0 ; i<test ; i++){

		cin>>size;

		int arr[size];

		for(int  i = 0 ; i<size ; i++){
			cin>> arr[i];
		}

		int total = swapping(arr,size);

		printf("Optimal train swapping takes %d swaps.\n",total );
	}


	return 0;
}