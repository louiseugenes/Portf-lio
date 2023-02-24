#include <iostream>


using namespace std;

int main(){

	int a1, b2, c3;
	cin >> a1 >> b2 >> c3;
	
	if (a1>b2 && a1>c3) {
		cout << a1 << " eh o maior";
	}else
		if (b2>a1 && b2>c3) {
		cout << b2 << " eh o maior";
		}else{
			cout << c3 << " eh o maior";
		}
	

	return 0;
}
