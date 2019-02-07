#include <cstdio>


using namespace std;


int main(){

	int H  , D , F;
	float U ;

	while(scanf("%d%f%d%d",&H, &U , &D , &F) && H!=0){

		int  day = 1;

		float fatigue = (F * U)/100.0;

		float init_height = 0 ;

		bool failure = false;

		while(H>0){

			init_height +=  U;

			if(U>0)
				U-=fatigue;


			if(init_height>H)
				break;

			init_height -= D ;

			if(init_height< 0){
				failure =true;
				break;
			}

			day++;

		}

		if(!failure){
			printf("success on day %d\n",day);
		}
		else
			printf("failure on day %d\n",day);


	}



	return 0;
}