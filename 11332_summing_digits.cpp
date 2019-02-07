#include<iostream>

using namespace std;

int main(){

	long long  int x;

	while(cin>>x){

		if(x==0)
			return 0;
		
		int sum =0 ;

	 while(true){
		while(x!=0)
		{
			sum+=x%10;
			x/=10;

		}

		if(sum>9)
		{
			x=sum;
			sum = 0 ;
		}
		else 
			break;

	}

		cout<<sum<<endl;
	}

	return 0;
}