#include<bits/stdc++.h>

using namespace std;


int main(){
int test;

unsigned int n1 , n2 ;

cin>>test;
int kase = 1;

for(int i = 0 ;i<test;++i){

    cin>>n1>>n2;

    if(n1%2==0)
        n1+=1;

    unsigned long long sum = 0 ;

    while(n1<=n2){
        sum+=n1;
        n1+=2;
    }

    cout<<"Case "<<kase++<<": "<<sum<<endl;
}




return 0 ;
}
