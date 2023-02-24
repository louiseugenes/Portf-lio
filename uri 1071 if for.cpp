#include <iostream>
int main() {
 
    int x, y;
    int i;
    int soma = 0;
    scanf("%d\n%d", &x, &y);
    
    if(x < y){
    	for(i = x+1; i < y; i++)
    		if(i%2 != 0)
    			soma += i;
	}else{
		for(i = y+1; i < x; i++)
    		if(i%2 != 0)
    			soma += i;
	}
	printf("%d\n", soma);
    

    return 0;
}
