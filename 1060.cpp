#include <iostream>
 
using namespace std;
 
int main() {
 
    float num;
    int val, cont;
    for(cont=1;cont <=6;cont++)
    {
        cin >> num;
        if(num>=0){
            val=val+1;
        }
    }
        cout << val << " valores positivos" << endl;
    return 0;
}
