#include <stdio.h>

int main(){

    char n1[20], n2[20], n3[20];
        scanf("%s %s %s",&n1,&n2,&n3);

    if (n1[0] == 'v')
    {   // parte de cima
        if(n2[0] == 'a'){
           if(n3[0]== 'c') printf("Aguia\n");
           else printf("pomba");
    } else{ 
        //parte de baixo
        if(n3[0] == 'o') printf("homem");
        else printf("vaca");
    }
    }

///////////////////////INVERTEBRADO//////////////////////

if (n1[0] == 'i')
    {   // parte de cima
        if(n2[0] == 'i'){
           if(n3[2]== 'm') printf("pulga\n");
           else printf("largata");
    } else{ 
        //parte de baixo
        if(n3[0] == 'h') printf("sanguessuga");
        else printf("minhoca");
    }
    }
    

    return 0;
}