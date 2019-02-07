#include<iostream>

using namespace std;

int main(void){


	int test,n;
	
	cin>>test;
	
	while(test--)
	     {
		cin>>n;
		
		int temp_n = (((((n*567)/9+7492)*235)/47)-498)/10;
		
		if(temp_n%10<0)
			cout<<(temp_n*-1)%10<<endl;
		else 
			cout<<temp_n%10<<endl;
		
	    }

return 0;
}
