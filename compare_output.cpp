#include <bits/stdc++.h>

using namespace std;

int main(){


	int n ;

	cin>>n;

	cin.ignore();

	vector<string> res;

	for(int i = 0 ; i<n ; ++i){

		string tmp ;

		getline(cin,tmp);

		res.push_back(tmp);
	}


	int count = 0 ; bool flag = false ;


	for(int i = 0 , j = n/2 ; i<n/2 ; ++i,++j){

		if(res[i].compare(res[j])!=0){
			cout<<"Output differs: "<<res[i]<<" "<<res[j]<<endl;
			count++;
			flag = true;
		}

	}

	if(flag){
		cout<<count<<" Mismatch found!! Start Fixing!! :("<<endl;
	}
	else
		cout<<"Congratulation finished comaparing with no error!"<<endl;


	return 0 ;
}