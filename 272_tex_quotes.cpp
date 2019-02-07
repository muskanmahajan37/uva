#include<stdio.h>
#include<string.h>

int main(void)
{

	char text[1000];

	int count=0 ;

	while(gets(text)){

		int length  = strlen(text);


		for(int i = 0  ; i<length ; i++)
		{
			if(text[i]=='"' && count ==0)
				{ printf("``"); 
			      count=1;}

			else if(text[i]=='"' && count ==1)
				 {  
				 	printf("''");

				 	count = 0; 
				 }

			else printf("%c",text[i] );


		}
		printf("\n");



	}

	return 0 ;

}