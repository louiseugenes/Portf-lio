#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double n1, n2, n3, n4, media,exame;
    
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2+n2*3+n3*4+n4*1)/10;
    
    cout << setprecision(1) << fixed;
    cout << "Media: " << media << endl;
    if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if (media >= 5.0){
        cout << "Aluno em exame" << endl; 
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        if((media + exame) / 2.0 > 5.0){
            cout <<"Aluno aprovado" << endl;
        }else{
            cout <<"Aluno reprovado" << endl;
        } cout <<"Media final: "<< ((media + exame) / 2.0);
        cout << setprecision(1) << fixed;}
         else{
             cout << "Aluno reprovado" << endl;
         }
        
    
    
    return 0;
}
