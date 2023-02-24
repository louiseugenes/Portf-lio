#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	double a,b,c,x;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if (a < b)
	{
		x=a; // a - x
		a=b; // x - b
		b=x; // x - a
	}	
	if 	(a < c){
		x=a;
		a=c;
		c=x;}

	if (b < c){
		x=b;
		b=c;
		c=x;}
	x = a + b;
	if(a>=x){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		a=a*a;
		b=b*b;
		c=c*c;
		x=b+c;
		}if (a==x){
			printf("TRIANGULO RETANGULO\n");
		}if (a>x){
			printf("TRIANGULO OBTUSANGULO\n");
		}if (a<x){
			printf("TRIANGULO ACUTANGULO\n");
		}if (a==b && b==c){
			printf("TRIANGULO EQUILATERO\n");
		}else if(a==b || b==c ||a==c){
		printf("TRIANGULO ISOSCELES\n");
	}
	
	return 0;
}
