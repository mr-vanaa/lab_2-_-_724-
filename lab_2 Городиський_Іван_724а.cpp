
#include <iostream>
#include <math.h>
using namespace std;
double z1,z2,b;
int main() {
	cin >> b;
	z1 = (sqrt((2 * b) + (2 * (sqrt(pow(b, 2) - 4))))) / (sqrt(pow(b, 2) - 4) + b + 2);
	z2 = 1.0 / (sqrt(b + 2.0));
	cout << "z1 = " << z1 << "\n";
	cout << "z2 = " << z2;
}
