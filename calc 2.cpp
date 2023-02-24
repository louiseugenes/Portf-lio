#include <stdio.h>

int main(){
 
    int d1,h1,m1,s1,d2,h2,m2,s2;
    
    printf("--------------------------------------------------\n");
    printf("Calculadora de tempo de inicio/termino (by: @luiseugeenio)\n");
    printf("--------------------------------------------------\n");
    
    //////////Tempo de Inicio////////////////////////////////////
    printf("\nDigite o Dia de Inicio (Ex: Dia x):\n");
    scanf("Dia %d", &d1);
    printf("Digite o horario de Inicio (Ex: hora:minuto:segundo):\n");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    
    /////////Tempo de termino///////////////////////////////////
    printf("\nDigite o Dia de Termino:\n");
    scanf("\nDia %d", &d2);
    printf("\nDigite o horario de Termino:\n");
    scanf("%d:%d:%d",&h2,&m2,&s2);
 
    /////////Calculo do tempo////////////////
    
    s1 = s2 - s1;
    m1 = m2 - m1;
    h1 = h2 - h1;
    d1 = d2 - d1;
    
    ////////Calculo caso os valores sejam <0//////////////////////
    
    if(s1<0){
        s1+=60;
        m1--;
    }
        if(m1<0){
            m1+=60;
            h1--;
        }
            if(h1<0){
                h1+=24;
                d1--;
            }
    ///////////////////RESULTADO//////////////////////////////////
    
    printf("--------------------------------------------------\n");
    printf("Resultado do seu Calculo:\n");
    printf("--------------------------------------------------\n");
    
    printf("%d dia(s)\n", d1);
        printf("%d hora(s)\n", h1);
            printf("%i minuto(s)\n", m1);
                printf("%i segundo(s)\n", s1);
    return 0;
}
