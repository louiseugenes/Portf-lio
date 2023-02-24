#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, i;
    int in = 0;
    int out = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n;i++){
    	scanf("%d", &n);
    	if(n >= 10 && n <= 20)in++;
    	else out++;
	}
    
    printf("%d in\n", in);
 	printf("%d out\n", out);
    return 0;
}
