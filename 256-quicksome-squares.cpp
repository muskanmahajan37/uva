//Status :AC
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

/*vector<ll>two,four,six,eight;

void gen(){

	four.pb(0); four.pb(1);
	six.pb(0); six.pb(1);
	eight.pb(0); eight.pb(1);


	for(int i = 0; i<=99999999; ++i){

		long long x , y ;

		long long tmp = i ;

		if(tmp<=99){
			x = tmp%10; tmp/=10;  y = tmp%10;
			if((x+y)*(x+y)==i)
			    two.pb(i);
		}
		else if(tmp>99 && tmp<=9999){
			x = tmp%100 ; tmp/=100; y =tmp%100;
				if((x+y)*(x+y)==i)
			    four.pb(i);
		}
		else if(tmp>9999 && tmp<=999999){
			x = tmp%1000 ; tmp/=1000 ; y =tmp%1000;
				if((x+y)*(x+y)==i)
			    six.pb(i);
		}
		else if(tmp>999999 && tmp<=99999999){

			x = tmp%10000 ; tmp/=10000 ; y =tmp%10000;

				if((x+y)*(x+y)==i)
			    eight.pb(i);
		}

		
	}
}*/


int main(){


	int n;

	while(cin>>n){

		//gen();

		string two ="00\n01\n81\n";
		string four="0000\n0001\n2025\n3025\n9801\n";
		string six = "000000\n000001\n088209\n494209\n998001\n";
		string eight="00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n";
		
		if(n==2)
			cout<<two;
		else if(n==4)
			cout<<four;
		else if(n==6)
			cout<<six;
		else if(n==8)
			cout<<eight;

	}


  return 0;
}
