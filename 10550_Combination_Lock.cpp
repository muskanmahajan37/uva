#include<iostream>

using namespace std;

int main(){

	int inital_position  , pos1 , pos2 , pos3 ;

	while(cin>>inital_position>>pos1>>pos2>>pos3)
	{
		if(inital_position==0 && pos1==0 && pos2 == 0 && pos3==0 )
			return 0;
		int sum = 1080;

		if(inital_position>pos1)
			sum+= 9*(inital_position-pos1);
		else
			sum+= 9*(40-pos1+inital_position);

		if(pos2>pos1)
			sum+=9*(pos2-pos1);
		else
			sum+=9*(40-pos1+pos2);
			
		if(pos2>pos3)
			sum+=9*(pos2-pos3);
		else
			sum+=9*(40-pos3+pos2);			
			
		cout<<sum<<endl;
	}
	
		
return 0;
}
