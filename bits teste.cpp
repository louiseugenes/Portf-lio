#include <stdio.h>

int main(){
	
	int Bit, Bits[7];
	int i;
	
	printf("Digite o Bit verificador:\n");
	scanf("%d", &Bit);
	
	for (i = 0 ; i <= 6 ; i++){
		printf("Digite os Bits:\n");
		scanf("%d", &Bits[i]);
		
	}
	
	int soma = 0;
	i = 0;
	while (i < 7){
		soma += Bits[i] / 10;
		i++;
	}
	
	if (soma == 0 && Bit == 0){
		printf("Os dados chegaram corretos!");
	}
	
	return 0;
}
