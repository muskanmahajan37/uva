#include<iostream>

using namespace std;

int main(void){


	int test;
	int salary[3];
	int least,highest,survivor;
	cin>>test;
	 int kase =1;
	while(test--)
	{

		for(int i = 0 ;i<3 ;i++)
			cin>>salary[i];

		least  = salary[0] ; highest = salary[1];

		for(int i = 0 ; i<3 ;i++)
			{ if(least>salary[i])
			    	least = salary[i];
			   if(highest<salary[i])
			   		highest  =salary[i];
			}

		for(int i = 0 ;i<3 ;i++)
			if(salary[i]!=least && salary[i]!=highest)
			   survivor = salary[i];	

		cout<<"Case "<<kase++<<": "<<survivor<<endl;
	}


	return 0;

}