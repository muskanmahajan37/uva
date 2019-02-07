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

	int t ;

	cin>>t; getchar();

	while(t--){

		int m , n ;

		cin>>m>>n; getchar();

		string in[n];

		for(int i =0 ; i<m ; ++i){

			getline(cin,in[i]);
			cout<<in[i]<<endl;	
		}


		int q ;
		cin>>q;

		for(int i =0 ; i<q ; ++i){

			string tmp ;
			cin>>tmp;

			int len = tmp.length();

			bool res = false;

			for(int j= 0; j<m && !res; ++j){

				for(int k = 0; k<n && !res ; ++k){

					if(in[j][k]==tmp[0]){

						for(int l = 0 ; l<8 ; ++l){

							if(j+len<=n){
								bool tmpres = true;
								int tmpi = 0;
								while(tmpi<len){

									if(in[j][k+tmpi]!=tmp[tmpi]){
										tmpres = false;
										break;
									}

									tmpi++;
								}

								if(tmpres==true){
									res = true;
									break;
								}
							}

							if(j-len>=0){
								bool tmpres = true;
								int tmpi = 0;
								while(tmpi<len){

									if(in[j][k-tmpi]!=tmp[tmpi]){
										tmpres = false;
										break;
									}
									tmpi++;
								}

								if(tmpres==true){
									res = true;
									break;
								}
							}
							if(k+len<=m){
								bool tmpres = true;
								int tmpi = 0;
								while(tmpi<len){

									if(in[j+tmpi][k]!=tmp[tmpi]){
										tmpres = false;
										break;
									}
									tmpi++;
								}

								if(tmpres==true){
									res = true;
									break;
								}
							}

							if(k-len>=0){
								bool tmpres = true;
								int tmpi = 0;
								while(tmpi<len){

									if(in[j-tmpi][k]!=tmp[tmpi]){
										tmpres = false;
										break;
									}
									tmpi++;
								}

								if(tmpres==true){
									res = true;
									break;
								}
							}
						}
					}
				}
				
			}

		}


	}	



	return 0 ;
}
