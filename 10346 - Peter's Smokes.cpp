#include <bits/stdc++.h>

using namespace std;

unsigned int total_cig(unsigned int n ,unsigned int k){

	unsigned int total = 0;

	while(n>=k){
		total+= n/k;
		n = n/k + n%k;
	}

	return total;

}

int main(){

	unsigned int n , k ;

	while(scanf("%d%d",&n ,&k)!=EOF){
			cout<<total_cig(n,k)+n<<endl;

	}

	return 0 ;
}
