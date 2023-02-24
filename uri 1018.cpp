#include<stdio.h>
int main(){
	
    int cedulas[7],i,x;
    int vet[7]={100,50,20,10,5,2,1};
    	scanf("%d",&x);
    
	//-----------------1 for------------------------
		
    for(i = 0;i < 7 ; i++){
        cedulas[i]= x / vet[i];
        	x = x % vet[i];
    }
    
    //-----------------2 for---------------------------------
    
    for(i = 0; i <7; i++){
        printf("%d nota(s) de R$ %d,00\n",cedulas[i],vet[i]);
    }
    
return 0;
}
