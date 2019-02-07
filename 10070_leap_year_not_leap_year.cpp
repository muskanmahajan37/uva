#include <bits/stdc++.h>


using namespace std;

bool isleapyear(int year){

	return year%400==0 || (year%4==0 && year%100!=0);

}

bool ishuluchulu(int year){

	return year%15==0;
}

bool isbulukulu(int year){


	return year%55 == 0;
}


int main(){


	int year ;

	while(cin>>year){


		string in ="";

		bool isspecial = false;


		if(isleapyear(year)){
			in+="This is leap year.\n"; isspecial = true;
		}

		
		if(ishuluchulu(year)){
			in+="This is huluculu festival year.\n"; isspecial=true;
		}


	    if(isbulukulu(year) && isleapyear(year)){
			in+="This is bulukulu festival year.\n"; isspecial =true;
	    }
		
				
		if(isspecial)
		   cout<<in;
		else	
			cout<<"This is an ordinary year.\n";
		
	}

	return 0 ; 
}