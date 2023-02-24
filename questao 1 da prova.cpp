#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int number;
		scanf("%d", &number);
		
	switch(number % 2){
		case 0:
			printf("O numero eh par!");
			break;
		case 1:
			printf("O numero eh impar!");
			break;
		default:
			printf("");
			break;
	}
return 0;
	
}
