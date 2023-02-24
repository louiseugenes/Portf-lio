#include <iostream>
 
using namespace std;
 
int main() {
 
    int count = 0;
    
    for (count = 1; count <= 100; count++ ){
    	
    	if (count %2 == 0){ // para numero impar só colocar != 0
    	cout << count << endl;
    }
	}
 
    return 0;
}
