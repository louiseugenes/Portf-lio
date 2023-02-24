#include<stdio.h>

int main(){
	
	float valor,imposto;
		scanf("%f",&valor);
		
	if(valor <= 2000){
		printf("Isento");
	}
	else if(valor < 3000){
		imposto = valor*0.08;
		printf("\nImposto pago sera: %.2f\n",imposto);
	}
	else if(valor < 4500){
		imposto = valor*0.18;
		printf("\nImposto pago sera: %.2f\n",imposto);
	}
	else if (valor >= 4500){
		imposto = valor * 0.28;
		printf("\nImposto pago sera: %.2f\n",imposto);	
	}
		}
