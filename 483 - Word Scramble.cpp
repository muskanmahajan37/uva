#include <bits/stdc++.h>

using namespace std;

int main(){


  string in;

  while(getline(cin,in)){

      int len = in.length();

       for(int i = 0 ; i<len ;++i){
            if(in[i]==' ' || len == i+1){
                for(int j = i-1 ; in[j]!=' '|| j!=0 ; --j)
                    cout<<in[j];
            }

        }



  }


 return 0;
}
