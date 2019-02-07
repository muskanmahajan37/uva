#include<iostream>
#include<string.h>
using namespace std;

int main(){

	int test;
	cin>>test; 

	char command[100]; int donation = 0 ;
	while(test--)
	{
		cin>>command;

		if(strcmp(command,"report")==0)
			cout<<donation<<endl;
		else
		{	int temp;

			cin>>temp;
			donation+=temp;
		}

	}
	return 0;
}