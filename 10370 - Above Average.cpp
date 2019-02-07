#include <bits/stdc++.h>


using namespace std;

int main(){

int test;

cin>>test;


while(test--){

    int n , sum =0;

     cin>>n;
     int arr[n];

    for(int i= 0 ;i<n ;++i){

        cin>>arr[i];

        sum+=arr[i];

     }

     float avg = (float)sum/n ;

     int aboveavg = 0 ;
     for(int i = 0 ; i<n ; ++i){
            if(arr[i]>avg)
             aboveavg++;
     }



    printf("%0.3f%%\n",(float)aboveavg*100/n);
}


return 0;

}
