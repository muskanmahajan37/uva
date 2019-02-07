// 2.15 PM  , 14 July , 2017  Dhaka 

// Problem status : AC

#include <iostream>

using namespace std;




int main(){


	int N  , M  , count = 0 ;

	while(true){


		cin>>M>>N ;

		if(M==0  && N ==0 )
			return 0 ;

		if(count>0)
			cout<<"\n";

		int arr[M+2][N+2];
		char c ;

		for(int i = 0 ; i<M ; i++)
			for(int j= 0 ; j<N ; j++)
				arr[i][j] = 0 ;

		for(int i=0 ; i<M ; i++)
			for(int j = 0 ; j<N ; j++){

				cin>>c; 

				if(c=='*'){
					arr[i][j] = -1;

					if(arr[i][j+1]!=-1)
						arr[i][j+1]++;
					if(arr[i][j-1]!=-1)
						arr[i][j-1]++;
					if(arr[i+1][j]!=-1)
						arr[i+1][j]++;
					if(arr[i-1][j]!=-1)
						arr[i-1][j]++;
					if(arr[i-1][j+1]!=-1)
						arr[i-1][j+1]++;
					if(arr[i+1][j-1]!=-1)
						arr[i+1][j-1]++;
					if(arr[i+1][j+1]!=-1)
						arr[i+1][j+1]++;
					if(arr[i-1][j-1]!=-1)
						arr[i-1][j-1]++;				

				}
			}

		cout<<"Field #"<<++count<<":\n";


		for(int i = 0 ; i<M; i++){
			for(int j = 0 ; j<N; j++){

				if(arr[i][j]==-1)
					cout<<'*';
				else
				   cout<<arr[i][j];

			}

			cout<<'\n';

		}

	}


	return 0 ;
}