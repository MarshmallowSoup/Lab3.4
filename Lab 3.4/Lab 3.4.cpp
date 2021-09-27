// < Лисецький Володимир >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12

#include <iostream>;
using namespace std;

int main(){
	double x, y, R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	if ((x <= 0 && y >= 0 && x >= -R && y <= R && pow(R, 2) >= pow(x + R, 2) + pow(y - R, 2)) ||
		(x > 0 && x < R && y > -R && y < 0 && pow(R, 2) >= pow(x - R, 2) + pow(y + R, 2)))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	cin.get();
	return 0;
} 