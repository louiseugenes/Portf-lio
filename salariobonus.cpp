#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
 
    string vendedor;
	double salariofixo, totaldevendas, total;
	
	cin >> vendedor;
	cin >> salariofixo;
	cout << setprecision(2) << fixed;
	cin >> totaldevendas;
	cout << setprecision(2) << fixed;
	
	total = (salariofixo + (totaldevendas * 0.15));
    cout << "TOTAL = R$ " << total <<endl;
 	cout << setprecision(2) << fixed;
    return 0;
}
