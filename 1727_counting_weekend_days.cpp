#include <bits/stdc++.h>


using namespace std;



int foo(string m){

	if(m=="JAN" || m== "MAR" || m=="MAY" || m=="JUL" || m=="AUG" ||
		m=="OCT" || m=="DEC")
		return 31;
	else if(m=="FEB")
		return 28;

	return 30;

}


int day(string d){

	if(d=="SAT")
		return 0;
	else if(d=="SUN")
		return 1 ;
	else if(d=="MON")
		return 2;
	else if(d=="TUE")
		return 3;
	else if(d=="WED")
		return 4;
	else if(d=="THU")
		return 5;

	return 6;
}

int main(){


	int n ;

	cin>>n ;


	while(n--){

		string m , d;


		cin>>m>>d;

		int arr[7] = {0};

		int t_d = foo(m);

		int st  = day(d);

		for(int i = 0 ; i<t_d ; ++i){

			arr[st]++;

			st++;
			st= st%7;

		}


		cout<<arr[6]+arr[0]<<endl;
	}




	return 0 ;


}