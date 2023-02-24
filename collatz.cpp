#include <stdio.h>

int main(){
	
	int number, i=0;
		scanf("%i", &number);
	
	for(i==number ; i =1 ; i++){
		if(number%2==0){
			number = number/2;
		} else{
			number = (number*3) + 1;
	}
		printf("%i", number);
	}
}
