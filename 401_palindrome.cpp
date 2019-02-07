//Status : AC

#include <bits/stdc++.h>


using namespace std;

bool reverselist(char c,char c1){
	
	return c =='E' && c1=='3' || c=='3' && c1=='E' ||
		   c =='J' && c1=='L' || c=='L' && c1=='J' ||
		   c =='S' && c1=='2' || c=='2' && c1=='S' ||
		   c =='Z' && c1=='5' || c=='5' && c1=='Z' ;
}

bool mirrorlist(char c){

	return c=='A' || c=='H' || c=='I' ||c=='M' || c=='O' ||
		   c=='T' || c=='U' || c=='V' || c=='W' || c=='X' ||
		   c=='Y' || c=='8' || c=='1';
}

bool ispalindrome(string in){


	int len = in.length();

	int li = len/2;

	for(int i = 0; i <li ; ++i){

		if(in[i]!=in[len-i-1])
			return false;
	}

	return true;
}


bool ismirrorstring(string in){

	int len = in.length();

	int li = len/2;

	bool m = false;

	for(int i = 0; i <li ; ++i){

		if(reverselist(in[i],in[len-1-i])){
			m = true;
			continue;
		}
		else if(in[i]!=in[len-1-i])
			return false;
		
	}

	return m ;

}

bool ismirrorpalindrome(string in){

	int len = in.length();
	int li = len/2 ;

	for(int i = 0 ; i<li ; ++i){
		if(!mirrorlist(in[i]) && !mirrorlist(in[len-1-i]))
			return false;
		else if(in[i]!=in[len-1-i])
			return false;
	}	

	if(!mirrorlist(in[li]))
		return false;

	return true;

}

int main(){


	string in ;

	while(cin>>in){


		cout<<in<<" -- is";

		if(ismirrorstring(in))
			cout<<" a mirrored string.\n";
		else if(ismirrorpalindrome(in))
			cout<<" a mirrored palindrome.\n";
		else if(ispalindrome(in))
			cout<<" a regular palindrome.\n";
		else
			cout<<" not a palindrome.\n";

		cout<<'\n';


	}


	return 0 ;
}