#include<iostream>
#include<string>

using namespace std;

int main(){

	int test ;

	string brother_said;

	cin>>test; cin.ignore();

	while(test--)
	{	
		int said_o = 0,said_n=0 ,said_e =0;
		getline(cin,brother_said);

		if(brother_said.length()>3)
			cout<<3<<endl;
<<<<<<< HEAD
		else if(brother_said[0]=='o' || )
			cout<<1<<endl;
		else
			cout<<2<<endl;



=======
		else 
		    {
  			for(int i= 0 ; i<brother_said.length(); i++)
			   if(brother_said[i]=='o' || brother_said[i]=='n' || brother_said[i]=='e')
			 	{
				   if(brother_said[i]=='o' && said_o==0)
				      said_o++;
				   if(brother_said[i]=='e' && said_e==0)
				     said_e++;
				   if(brother_said[i]=='n' && said_n==0)
				     said_n++;
				}
			
			if(said_o+said_n+said_e>=2)
			  cout<<1<<endl;
			else
		           cout<<2<<endl;
		    }	
		
		
>>>>>>> eedb5cafe717d34b6f9da0fa397f43ff150bda81
	}



return 0;

}
