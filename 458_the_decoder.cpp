#include<iostream>
#include<string>


using namespace std;



int main(){

	string input;

	while(getline(cin,input)){


		int size = input.size();

		

		for(int i = 0 ; i<size ; i++ ){

			input[i]-=7;
		}

		cout<<input<<endl;
		
	}

		return  0;

}