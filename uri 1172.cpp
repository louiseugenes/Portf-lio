#include <iostream>
 
using namespace std;
 
int main() {
 
    int P, R;
    int i;
    
    for(i = 1 ; i <= 1 ; i++){
    	scanf("%d %d", &P, &R);
    	
    	if (P == 1 && R == 0) printf("B\n");
    	else if (P == 1 && R == 1) printf("A\n");
    	else printf("C\n");
	}
 
    return 0;
}
