#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
		
	int n;
	cin>>n; cin.ignore();
	string ex_result;

	while(n--){

		getline(cin,ex_result);

		if(ex_result=="1" || ex_result== "4" || ex_result == "78")
			cout<<"+"<<endl;
		else if( ex_result[ex_result.length()-1]=='5' && ex_result[ex_result.length()-2]=='3')
			cout<<"-"<<endl;
		else if(ex_result[0]=='9' && ex_result[ex_result.length()-1]=='4')
			cout<<"*"<<endl;
		else
			cout<<"?"<<endl;
	}

	return 0;
}
