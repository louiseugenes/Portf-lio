#include <stdio.h>

int main(){
	
	int a=3, b=4, c=5;
	
	a=b=c;
	b=c+a;
	c=c*a;
	b=a*b;
	
	printf("%d %d %d", a,b,c);
	
}
