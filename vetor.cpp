#include <stdio.h>

int main(){
	
	int i, aprovado=0, reprovado=0;
	float nota[5];
	
	for (i = 0 ; i <= 4 ; i++){
		printf("Digite a notas do alunos:\n");
		scanf("%f", &nota[i]);
		
		if (nota[i] > 6){
			aprovado=aprovado+1;
		}else{
			reprovado=reprovado+1;
		}
		
	}
	
	printf("Exibindo notas:\n");
	
	for (i = 0 ; i <= 4 ; i++){
		
		printf("nota[%i] = %.1f \n", i, nota[i]);
	}
	
	printf("\nO numero de aprovados eh: %d\n", aprovado);
	printf("\nO numero de reprovados eh: %d\n", reprovado);
	
	return 0;
}
