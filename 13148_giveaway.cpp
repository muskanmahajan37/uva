#include <bits/stdc++.h>

using namespace std;


int main(){


	//freopen("in","r",stdin);


	int arr[] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
47045881, 64000000 ,85766121};
	int n ;

	while(cin>>n){

		if(n==0)
			return 0 ;

		
		if(binary_search(arr,arr+21,n))
			cout<<"Special\n";
		else
			cout<<"Ordinary\n";

	}


	return 0;
}