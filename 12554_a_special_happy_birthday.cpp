//Status : Accepted

#include<iostream>

using namespace std;

int main(){

	int N;
	
	cin>>N;
	
	char string[N][100];
	
	for(int i = 0 ; i<N ; i++)
	    cin>>string[i];

	char song[][10]={"Happy","birthday","to","you"};

	int turning;

	if(N>16)
	   turning = (N/16)*16+16;
	else
	    turning = 16;


	for(int i = 0,j=0,k=0,count=1 ; i<turning ; i++,j++,k++,count++){
	    
  	    if(j==N)
			j=0;
	    if(k==4)
			k=0;
	    if(count%12==0 && count%16!=0){
			cout<<string[j]<<": "<<"Rujia\n";
			count = -4;
		}
	    else
	    	cout<<string[j]<<": "<<song[k]<<"\n";
	 }

return 0 ;
}

	
	        
  	     





		  
