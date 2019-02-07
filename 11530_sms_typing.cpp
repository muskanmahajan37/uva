/*
* @Author: eleven
* @Date:   2018-01-27 17:54:53
* @Last Modified by:   eleven
* @Last Modified time: 2018-01-27 18:38:13
*/
//Status : AC

#include <bits/stdc++.h>

using namespace std;
#define SIZE 8

char set1[SIZE]; 
char set2[SIZE] ;

int value(char  c){

	if(c==' ')
		return 1 ;
	else if(c=='z' || c=='s')
		return 4 ;
	else{

		bool set1_t = binary_search(set1,set1+8,c);

		if(set1_t==true)
			return 1 ;

		bool set2_t = binary_search(set2,set2+8,c);

		if(set2_t==true)
			return 2 ;

	}

	return 3 ;

}


int main(){


	int t ;
	cin>>t ;
	getchar();

	char arr[] = {'a','d','g','j','m','p','t','w'};
	char arr2[]= {'b','e','h','k','n','q','u','x'};

	copy(arr,arr+8 ,set1);
	copy(arr2,arr2+8 ,set2);

	int kase = 1;

	while(t--){

		string input ;
		getline(cin,input);
		int len = input.length();
		int count = 0;

		for(int i = 0; i<len ; ++i){

			count+= value(input[i]);
		}

		cout<<"Case #"<<kase++<<": "<<count<<endl;


	}


	return 0;
}