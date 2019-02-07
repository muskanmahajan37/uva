#include <bits/stdc++.h>

using namespace std;


int main(){

  
    srand(time(NULL));

    for(int i = 1 ; i<100; ++i){

    	int a = rand()%100000;
    	int b = rand()%100000;

    	if(a>b)
    		swap(a,b);
    	cout<<a<<" "<<b<<endl;
    }
 	

 	cout<<"0 0"<<endl;

    
    return 0 ;
}
