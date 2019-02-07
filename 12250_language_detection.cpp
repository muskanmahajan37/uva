#include<iostream>
#include<string>

using namespace std;

int main(){

	string text;
	int kase = 1;
	while(true)
	{
		getline(cin,text);

     		if(text=="#")
			   return 0;

			else if(text== "HELLO")
				 cout<<"Case "<<kase++<<": ENGLISH"<<endl; 
			else if(text=="HOLA")
					 cout<<"Case "<<kase++<<": SPANISH"<<endl;

			else if(text=="HALLO")
			       cout<<"Case "<<kase++<<": GERMAN"<<endl;

			else if(text=="BONJOUR")
				cout<<"Case "<<kase++<<": FRENCH"<<endl; 
            else if(text=="CIAO")
                 cout<<"Case "<<kase++<<": ITALIAN"<<endl;

		    else if(text=="ZDRAVSTVUJTE")
		    	 cout<<"Case "<<kase++<<": RUSSIAN"<<endl;
		    else
		    	 cout<<"Case "<<kase++<<": UNKNOWN"<<endl;

		


	}


	return 0;


}