#include<stdio.h>

int main(void)
{
	int velocity,accleration;

	while(scanf("%d%d",&velocity,&accleration)==2)
	{

		printf("%d\n",2*velocity*accleration);

	}


	return 0;

}