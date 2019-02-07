#include <cstdio>
#include <cstdlib>
using namespace std;


int main(){


	int n ;

	scanf("%d",&n);

	int sum =0 , diff =0;

	int a = 0 , b = 0;

	for(int i = 0  ; i < n ; i++){

		scanf("%d%d",&sum,&diff);

		a = (sum+diff)/2;

		b = sum - a;


		if (((sum+ diff) % 2 != 0) || (a + b != sum) || (abs(a-b) != diff) || a < 0|| b < 0)
			printf("impossible\n");
		else
			printf("%d %d\n",a,b);
	}

	return 0;
}