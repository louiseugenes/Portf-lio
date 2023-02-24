#include <iostream>
 
int main() {
 
 	int i,X,Y,J,temp, soma = 0;
	for(;i;i++){
  		scanf("%d %d", &X, &Y);
  		if(X <= 0 || Y <= 0) break;
  		if( X > Y) {temp = X ; X = Y ; Y = temp;}
		for( J = X ; J <= Y ; J++){
		  	printf("%d", J);
		  	soma += J;
		  }
		  printf("Sum=%d\n", soma);
	  } 
   
 
    return 0;
}
