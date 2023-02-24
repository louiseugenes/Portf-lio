#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main(){

	int R;
	double VOLUME;

	cin >> R;

	VOLUME = (4/3.0) * 3.14159 * pow(R,3);
	cout << setprecision(3) << fixed;
	cout << "VOLUME = " << VOLUME;

	return 0;
}
