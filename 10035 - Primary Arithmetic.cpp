#include <iostream>

using namespace std;


int total_carry(unsigned int n1 , unsigned int n2){

     unsigned int temp0 = 0;
     unsigned int temp1 = 0 ;

     if(n1<n2){
     	temp0 = n2;
     	temp1 = n1;
     }
     else{
     	temp0 = n1;
     	temp1 = n2;
     }

    int carry = 0 ;
    int count = 0;

    while(temp0!=0){

    	int temp2 = temp0%10;
    	int temp3 = temp1%10;

    	if(carry+temp2+temp3>9){
    		count++; carry = 1;
    	  }
    	else
    		carry = 0;

        temp0 /=10;
        temp1 /= 10;
    }

    return count;

}


int main(){

    unsigned int n1 , n2 ;

    while(cin>>n1>>n2){
          if(n1==0 && n2 ==0)
          	return 0;

        int carry = total_carry(n1 , n2);

        if(carry==0)
        	cout<<"No carry operation."<<endl;
        else if(carry==1)
        	cout<<"1 carry operation."<<endl;
        else
        	cout<<carry<<" carry operations."<<endl;



    }

	return 0;
}
