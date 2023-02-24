#include <iostream>
#include <stdio.h>

int main(int argc, char** argv) {
	
	
	int c1, p1, c2, p2;
	double valorp1, valorp2, pagamento1, pagamento2, pagamentofinal;
	
	c1 = 12;
	p1 = 1;
	c2 = 16;
	p2 = 2;
	
	valorp1 = 5.30;
	valorp2 = 5.10; 
	
	pagamento1 = p1 * valorp1;
	pagamento2 = p2 * valorp2;

	pagamentofinal = pagamento1 + pagamento2;
	
	printf("VALOR A PAGAR: R$ %0.2lf", pagamentofinal);
		
	
	
	return 0;
}
