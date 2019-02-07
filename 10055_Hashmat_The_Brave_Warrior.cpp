#include<stdio.h>
#include<iostream>
#define NEWLINE '\n'

using namespace std;

int main(void){

	long x  , y;

	while(scanf("%ld%ld",&x,&y)!=EOF){

		if(x>y)
			cout<<x-y<<endl;
		else
			cout<<y-x<<endl;
	}

	return 0;
}