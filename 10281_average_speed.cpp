/*
* @Author: eleven
* @Date:   2018-07-30 18:15:00
* @Last Modified by:   eleven
* @Last Modified time: 2018-07-30 19:27:40
*/
//Status :
//email:siriuslyra94@gmail.com

#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define umap unordered_map
#define ll long long
#define vsort(v) sort(v.begin(),v.end())
#define lcm(a,b) (a*b)/__gcd(a,b)

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main(){

	char in[100];

	int h , m , s , v ;

	double dis = 0 ;

	int elspt =  0; 

	while(scanf("%[^\n]%*c",in)!=EOF){

		int len = strlen(in);

		if(len>8){

			sscanf(in,"%d:%d:%d %d",&h,&m,&s,&v);

			int s  = h*3600+m*60+s;

			if(prev!=s)
				prev = s;

		}
		else{
			sscanf(in,"%d:%d:%d",&h,&m,&s);

		}

	}
	

	return 0 ;
		
}
