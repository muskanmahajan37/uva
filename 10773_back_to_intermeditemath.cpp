
//status : AC

#include <bits/stdc++.h>


using namespace std;


int main(){


	double d , v , u;

	int kase ; 

	cin>>kase;

	for(int i = 0; i<kase ; ++i){


		cin>>d>>v>>u;


		if(u<=v || u==0 || v==0)
			cout<<"Case "<<i+1<<": can't determine"<<endl;

		else{

			double p1 = d/u;

			double p2 = d/sqrt(u*u-v*v);

			cout<<"Case "<<i+1<<": ";

			cout<<fixed<<setprecision(3)<<fabs(p1-p2)<<endl;

		}


	}





	return 0 ;
		
}  