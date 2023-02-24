
#include <stdio.h>

int main() {
   
   int valores[30],i=0,soma=0; // 0 - 29
    
    while(i<30){
        scanf("%d",&valores[i]);
        soma += valores[i];
        i++;
    }
    
    printf("A soma dos %d numeros eh: %d",i, soma);
    return 0;
}
