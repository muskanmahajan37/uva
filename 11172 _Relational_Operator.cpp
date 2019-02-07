#include<iostream>

using namespace std;

int main(){


	int test , a , b;

	cin>>test;

	while(test--){

		cin>>a>>b;

		if(a>b)
			cout<<">"<<endl;
		else if(a<b)
			cout<<"<"<<endl;
		else 
			cout<<"="<<endl;

	}


}