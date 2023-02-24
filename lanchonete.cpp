#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
 int cod, qtd;
 double total, p1, p2, p3, p4, p5;

p1 = 4.00;
p2 = 4.50;
p3 = 5.00;
p4 = 2.00;
p5 = 1.50;

 cin >> cod >> qtd;
 
 
 switch(cod)
 {
 	case 1:
 		total = qtd * p1;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
 	break;
 	case 2:
 		total = qtd * p2;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
 	break;
 	case 3:
 		total = qtd * p3;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
 	break;
 	case 4:
 		total = qtd * p4;
 		cout << setprecision(2) << fixed;
 		cout << "Total: R$ " << total << endl;
 	break;
 	case 5: total = qtd * p5;
 	cout << setprecision(2) << fixed;
 	cout << "Total: R$ " << total << endl;
 	break;
 }
    

 
    return 0;
}
