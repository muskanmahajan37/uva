#include<stdio.h>

int main(void){

	int test;

	scanf("%d",&test);

	while(test--)
	{
		int farmer;
		scanf("%d",&farmer);

		int premium = 0 ;

		int a,b,c,i;

		for(i=0 ;i<farmer ;i++)
			{  scanf("%d%d%d",&a,&b,&c);
				premium+=a*c;}
					
	    printf("%d\n",premium);

	}

	return 0;

}