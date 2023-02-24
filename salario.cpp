#include <iostream>
#include <string>

int main(){
	
	string nomevendedor("JOAO");
	
	nomevendedor = "JOAO";
	
	double salariofixo, totaldevendas, total;
	
	salariofixo = 1700.00;
	totaldevendas = 1230.50;
	
	total = salariofixo +(totaldevendas * 0.15);
	
	printf("TOTAL = R$ %0.2lf", total);
	
	
	return 0;
	
}
	
	
	

