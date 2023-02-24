#include <stdio.h>

int main(){
	
	int num, cont, totalnum;

	totalnum = 0;
	
	for (cont = 1; cont<= 5; cont++){
		scanf("%d", &num);
		
	if (num % 2 == 0 && num > 0)	
		totalnum ++;
	}

	printf("%d valores pares\n", totalnum);
	
	return 0;
}
