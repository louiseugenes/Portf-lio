#include <iostream>
#include<stdio.h>
 
using namespace std;
 
int main() {
 
    int dia1, h1, m1, s1, dia2, h2, m2, s2;
    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    
    s1 = s2 - s1;
    m1 = m2 - m1;
    h1 = h2 - h1;
    dia1 = dia2 - dia1;
 	
 	if(s1<0){
 		s1 += 60;
 		m1--;
	 }
	 
	 if(m1<0){
	 	m1 +=60;
	 	h1--;
	 }
	 
	 if(h1<0){
	 	h1 +=24;
	 	dia1--;
	 }
 	
 	printf("%d dia(s)\n", dia1);
 	printf("%d hora(s)\n", h1);
 	printf("%d minuto(s)\n", m1);
 	printf("%d segundo(s)\n", s1);
 	
    return 0;
}
