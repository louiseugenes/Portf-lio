#include <iostream>

int main() {
 
    int N, hora, minuto, segundo;
    scanf("%d", &N);
    
    hora = N/3600;
    minuto = (N-(3600*hora))/60;
    segundo = (N-(hora*3600)-(minuto*60));
    
    printf("%d:%d:%d\n", hora, minuto, segundo);
    
    return 0;
}
