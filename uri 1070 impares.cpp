#include <iostream>
int main() {
 
    int X, cont;
    scanf("%d", &X);
    
    if (X %2 == 0){
        X = X+1;
        printf("%d\n");
    } else {
    	X = X;
    	printf("%d\n", X);
    } 
    for (cont = 1; cont <= 5; cont++){
        printf("%d\n", X+=2);
    }

    return 0;
}
