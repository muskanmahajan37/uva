//Status : AC

#include <bits/stdc++.h>

using namespace std;

int arr[3002];


bool isjolly(int n){

	bool res[3002];

	for(int i = 0; i<n ; ++i)
		res[i] = false;
	
	for(int i = 0 ; i<n-1 ; ++i){

		int index = abs(arr[i]-arr[i+1])-1;

		res[index] = true;
	}
 	
	for(int i = 0 ; i<n-1; ++i)
		if(res[i]==false)
			return false;

	return true;
}


int main(){



	int n; 



	while(cin>>n){

	for(int i = 0 ;i<n ; ++i){
		cin>>arr[i];
	}

	if(n>0 && isjolly(n) )
		cout<<"Jolly\n";
	else 
		cout<<"Not jolly\n";

	}
	return 0 ;
}