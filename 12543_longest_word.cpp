// 10.41 AM , 27 June , 2017 , Gobindagonj

// problem status : accepted

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

	string input ;

	string output;

	int prev = 0 ;

	while(true){

		int count = 0 ;

		cin >> input ;

		if(input == "E-N-D")
			break;

		int size = input.size();


		for(int i = 0 ; i<size ; i++)
			if(isalpha(input[i]) || input[i] == '-')
				count++;

		if(count>prev){
			prev = count;
			output = input;
		}
	}

	for(int i = 0 ;i<output.size(); i++){
		if(isupper(output[i]))
			cout<< (char)tolower(output[i]);
		else if(isalpha(output[i]) || output[i] == '-')
			cout<<output[i];
	} 


	cout<<endl;
	return 0;

}