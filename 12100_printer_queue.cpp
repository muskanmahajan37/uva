//Status :AC

#include <bits/stdc++.h>

using namespace std;

int main(){

	int t ;

	cin>>t;


	while(t--){


		int n , m ;

		cin>>n>>m;

		int arr[102];

		for(int i = 0 ; i<n ; ++i){

			cin>>arr[i];
		}


		int time = 0;

		while(m!=-1){

			int max = *max_element(arr,arr+n);
			

			if(arr[0]!=max){

				int tmp2 = arr[0];

				for(int j= 0 ; j<n ;++j){
					arr[j] = arr[j+1];
				}	

				arr[n-1] = tmp2;

				if(m==0)
					m = n-1;
				else
					m--;
			}
			else{


				for(int j= 0 ; j<n;++j){
					arr[j] = arr[j+1];
				}	

				n--;

				time ++;

				m--;

			}


		}

		cout<<time<<endl;

	}






	return 0 ;
}