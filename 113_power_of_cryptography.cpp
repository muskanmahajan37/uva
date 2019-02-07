//2.17 am , 24 june , 2017 , Gobindagonj

// problem status : AC

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	int n ; 
	double p;

	while(cin>> n >> p){
		
		cout<<setprecision(0)<<fixed<<pow(p , 1.0/n)<<endl;
	}


	return 0;
}