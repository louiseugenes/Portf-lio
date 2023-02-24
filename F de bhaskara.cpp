#include <iostream>
#include <math.h>
#include <iomanip>
 
int main() {
 
    double A,B,C, Delta, RaizP, RaizN;
    scanf("%lf%lf%lf",&A, &B, &C);
    
    Delta = pow(B,2) - 4 * A * C;
    
 	if (Delta < 0){
 		std::cout << "Impossivel calcular" << std:: endl;
	 }
	 else{
 	 RaizP = (-B + sqrt(Delta)) / (2 * A);
 	 RaizN = (-B - sqrt(Delta)) / (2 * A);
	 printf("R1 = %.5lf\n", RaizP);
	 printf("R2 = %.5lf\n", RaizN);
	 }
 	
 	
    return 0;
}
