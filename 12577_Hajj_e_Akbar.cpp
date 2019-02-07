#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(void){

	string chant; int kase = 0 ;

	while(getline(cin,chant)){

		if(chant=="*")
			return 0;

		if(chant=="Hajj")
			printf("Case %d: Hajj-e-Akbar\n",++kase);
		else if(chant=="Umrah")
			printf("Case %d: Hajj-e-Asghar\n",++kase);

	}

	return 0;
}