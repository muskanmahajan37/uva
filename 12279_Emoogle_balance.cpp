#include<iostream>

using namespace std;

int main(){

	int test= 75;
	int kase=1;
	while(test--)
		 {
		 	int N, given_treat=0, giving_treat=0;

		 	cin>>N;
		 	
		 	if(N==0)
		 		return 0 ;

		 	int input[N];

		 	for(int i= 0 ; i<N ; i++)
		 		{ 
		 			cin>>input[i];

		 			if(input[i]==0)
		 				given_treat++;
		 			else
		 				giving_treat++;
		 		}


		 	cout<<"Case "<<kase++<<": "<<giving_treat- given_treat<<endl;

		 }
return 0;

}