#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int dano;
	int mnoj = 1;
	cout << "введите любое число: ";
	cin >> dano;
	while (mnoj <= 14) {
		cout << dano * mnoj<<" ";
		mnoj++;
	}
}