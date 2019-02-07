#include <bits/stdc++.h>

using namespace std;

int value(char c){

}

int main(){

    string in ;

    while(getline(cin, in)){

        int len = in.length();

 for(int i = 0 ;i<len ;++i){

     char c =in[i];
    if(c>=65 && c<=67)
        cout<<2;
    else if(c>=68 && c<=70)
         cout<<3;
    else if(c>=71 && c<=73)
         cout<<4;
    else if(c>=74 && c<=76)
         cout<<5;
    else if(c>=77 && c<=79)
        cout<<6;
    else if(c>=80 && c<=83)
         cout<<7;
     else if(c>=84 && c<=86)
         cout<<8;
     else if(c>=87 && c<=90)
          cout<<9;
     else
         cout<<c;

 }
 cout<<'\n';

}



return 0 ;
}
