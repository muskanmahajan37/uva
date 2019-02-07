

#include <bits/stdc++.h>


using namespace std;

bool isleapyear(int y){

    return y%400 == 0 || (y%4==0 && y%100!=0);
}

int main(){

    //freopen("in","r",stdin);
   //freopen("out","w",stdout);

    int k , d , m , y ,y2;

    cin>>k;

    for(int i = 0 ; i<k ; ++i){

        cin>>d>>m>>y>>y2;

        if(d!=29 || m!=2)
          cout<<"Case "<<(1+i)<<": "<<y2-y<<endl;
        else{
                int c = 0 ;

                while(y+4<=y2){

                    if(isleapyear(y+4))
                        c++;
                    y+=4;
                }
                cout<<"Case "<<(1+i)<<": "<<c<<endl;

        }

    }


    return 0;
}
