#include <bits/stdc++.h>

using namespace std;



bool bar(int i){

	return i==2 || i==3 || i==5;
}


bool foo(int x){


	int i = 2 ;

	bool div = false;
	bool zero = false;


	while(x!=0 && i<6){

		if(x%i==0){
			x/=i;

			if(x==0)
				zero =true;
			div = true;
			
			if(!bar(i))
				return false;
		}
		else i++;


	}

	return div && zero;	

}


void res(){

	int i = 2 ; 
	int count  = 1 ;

	while(count!=1500){


		if(foo(i)){
			cout<<count<<" "<<i<<endl;
			count++;
		}

		i++;

	}

	cout<<--i<<endl;
	
}

int main(){

	res();

	return 0 ;
}