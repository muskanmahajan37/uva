#include <bits/stdc++.h>


using namespace std;


int main(){


	int t ;

	cin>>t ; 


	


	while(t--){



		int a , f ;
		getchar();

		cin>>a>>f;


		for(int i = 0 ; i<f ; ++i ){


			for(int j = 0 ; j<a ; ++j){

				for(int k = 0 ; k<=j ; ++k){

					cout<<j+1;
				}

				cout<<'\n';

			}


			for(int j = 1 ; j<a ; ++j){


				for(int k = 0 ; k<a-j  ; ++k){

					cout<<a-j;
				}

				cout<<'\n';
			}

			if(i+1!=f)
				cout<<'\n';
		}

		if(t!=0)
			cout<<'\n';
	}




	return 0 ;
}