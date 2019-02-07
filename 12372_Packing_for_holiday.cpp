#include<iostream>

using namespace std;

int main(){


	int T;

	cin>>T;

	int h , l , w ;

	int i = 0;

	while(T--){

		cin>>h>>l>>w;

		if(h<=20 && l<=20 && w<=20)
			cout<<"Case "<<++i<<": "<<"good\n";
		else
			cout<<"Case "<<++i<<": "<<"bad\n";

	}

	return 0;

}