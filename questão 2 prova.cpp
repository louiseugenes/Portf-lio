#include <stdio.h>

int main(){
	
	int n,i, valor[30], soma = 0;
	
	for(i=0 ; i<30 ; i++){
	
		scanf("%i", &valor[i]);
			soma = soma + valor[i];
	
	}	
	printf("A soma dos %i valores eh %i\n", i, soma);
	
	int somapar=0,somaimpar=0;
	
	for(i=0;i<30;i++){
		if(valor[i]%2==0){
			somapar = somapar + valor[i];
		} else if(valor[i]%2!=0){
			somaimpar = somaimpar + valor[i];
		}
	}
	
	printf("A soma dos valores par eh %i\n",somapar);
	printf("A soma dos valores impar eh %i\n",somaimpar);
	
	return 0;
}
