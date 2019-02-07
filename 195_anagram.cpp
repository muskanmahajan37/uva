#include<iostream>
#include<string.h>

using namespace std;

void swap(char* x, char* y){
	char temp = *x;
	*x=*y;
	*y=temp;
}
int main(void){


	char string[100];

	cin>>string;

	for(int i = 0, j = strlen(string) ; i< j ;i++)
	    for(int k=0 ; k<j-1 ; k++){
		swap(&string[k],&string[k+1]);
		cout<<string<<endl;
	}

	return 0;
}	 
