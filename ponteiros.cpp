#include <stdio.h>

int main(){
	
	int x[6];
	int y[6];
	int i;
	char z = 'a';
	int xx = 20;
	//------------- Ponteiros ------------
	
	int *pX = &x[6];
	int *pY = &y[6];
	char *pZ = &z;
	int *pXX = &xx;
	
	printf("%i", *pXX);
	
	//-----------instruções---------------
	
	for(i=0 ; i<6 ; i++){
		printf("\nDigite o valor %i para x: \n", i+1);
			scanf("%i", &pX[i]);
	}
	
	printf("\n----------------------------------\n");
	
	for(i=0 ; i<6 ; i++){
		printf("\nDigite o valor %i para y: \n", i+1);
			scanf("%i", &pY[i]);
	}
	
	printf("\n----------------------------------\n");
	
	for(i=0 ; i<6 ; i++){
		printf("\n%i valor de x: %i.\n", i+1, pY[i]);
	}
	
	printf("\n----------------------------------\n");
	
	for(i=0 ; i<6 ; i++){
		printf("\n%i valor de y: %i.\n", i+1, pY[i]);
	}
			
	//------------------------------------------------------------------
	
	//double soma = *pX + *pY;
		//printf("\nO resultado do valor do pX + pY eh: %.2lf.\n", soma);
		
	return 0;
}
