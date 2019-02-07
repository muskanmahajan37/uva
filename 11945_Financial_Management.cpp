#include<cstdio>

using namespace std;



int main(){


	int n;
	scanf("%d",&n);

	double total = 0 ;
	double deposit ;

	for(int i = 0 ; i<12 ;i++){

		scanf("%lf",&deposit);

		total+=deposit;
	}

	double saving = total/12.0;

	

	if(saving>1000)
		printf("$%d,")

	return 0;
}