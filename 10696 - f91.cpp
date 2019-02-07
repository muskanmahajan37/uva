#include <bits/stdc++.h>

using namespace std;

int f91(int N){

    if(N>=101)
        return N-10;


    return f91(f91(N+11));
}


int main(){

int in;

while(scanf("%d",&in)){

    if(in==0)
        return 0;

    cout<<"f91("<<in<<") = "<<f91(in)<<"\n";
}

return 0 ;

}
