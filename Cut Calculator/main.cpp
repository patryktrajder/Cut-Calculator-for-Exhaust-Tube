#include <iostream>
#include <math.h>
#include <conio.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062

using namespace std;

int main() {
	double a, b, fi, r, i, alfa;
	cout << "Podaj fi rury [mm]: ";
	cin >> fi;
	cout << "Podaj promien giecia [mm]: ";
	cin >> r;
	cout << "Podaj kat alfa [stopnie]: ";
	cin >> alfa;
	
	alfa *= PI / 180;
	a = sin(alfa / 2) * (r - fi / 2.) * 2.;
	b = a * (r + fi / 2.) / (r - fi / 2.);
	
	cout << "\na = " << a << " mm";
	cout << "\nb = " << b << " mm";
	_getch();
	return 0;
}