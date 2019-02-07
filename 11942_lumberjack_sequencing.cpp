#include<iostream>

using namespace std;

int main(){

	int N;
	cin>>N;
        int temp = N;
	while(N--){

	int array[10];
		
	for(int i = 0 ; i<10 ; i++)
	   cin>>array[i];
	
	bool signal = true;
	if(array[0]<array[1]){	
	for(int i = 0 ; i<9 ; i++)
	   { if(array[i]<=array[i+1])
		continue;
	     else
		{ signal = false ; break;} }
	}
	else
	   {
	      for(int i = 0 ; i<9 ; i++)
           { if(array[i]>=array[i+1])
                continue;
             else
                { signal = false ; break;} }
        }

	
	if(N+1==temp)
	   cout<<"Lumberjacks:"<<endl;
    
	if(signal == true)
	  cout<<"Ordered"<<endl;
	else
	   cout<<"Unordered"<<endl;
	}
	
	return 0;
}
