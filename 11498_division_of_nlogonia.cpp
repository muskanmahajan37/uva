#include<iostream>

using namespace std;

int main(){

	int k;

	

	while(cin>>k){

		if(k==0)
			return 0;

		int x , y , m , n;

		cin>>x>>y;

		while(k--){

			cin>>m>>n;

			if(m>x && n>y)
				cout<<"NE"<<endl;
			else if(m>x && n<y)
				cout<<"SE"<<endl;
			else if(m<x && n>y)
				cout<<"NO"<<endl;
			else if(m<x && n<y)
				cout<<"SO"<<endl;
			else 
				cout<<"divisa"<<endl;
		}

	}


	return 0;

}