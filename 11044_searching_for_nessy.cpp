#include<iostream>
#define NEWLINE '\n'

using namespace std;

int main(){

	int test, m, n;

	cin>>test;

	while(test--)
	{
		cin>>m>>n;
		cout<<((m/3)*(n/3))<<NEWLINE;
	}


	return 0;

}