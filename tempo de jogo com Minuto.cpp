#include <iostream>

int main(){
    
	int horaInicio, minutoInicio, horaFim, minutoFim, hora, minuto;
	std::cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;
   
   hora = horaFim - horaInicio;
   minuto = minutoFim - minutoInicio;
   
   if ((hora <= 0) && (minuto <0)) { hora += 24;}
   if (minuto < 0) {minuto += 60; hora--;}
   
	std::cout << "O JOGO DUROU " << hora << " HORAS(S) E " << minuto << " MINUTO(S)\n";
		
    return 0;
}
