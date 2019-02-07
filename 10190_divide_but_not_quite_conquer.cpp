#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

	int n , m ;

	while((scanf("%d%d",&n,&m))==2){

		int array[100],i=0 ,temp_n = n;
	

		while(n>1){

			if(n%m==0)
				{
				  array[i++] = n/m;
				  n/=m;
				}
			else 
				n=1;
			
		}

		if(array[i-1]==1){
		    cout<<temp_n<<" ";
			for(int j =0 ; j<i ; j++) 
				cout<<array[j]<<" ";
			cout<<endl;
		    }
		else
			cout<<"Boring!"<<endl;

	}

	return 0;
}