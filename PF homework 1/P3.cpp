/*#include <iostream>
using namespace std;
int main()
{
	int hp = 500, rd, attack = 0, ad = 0, sumrd = 0, sumad = 0;
	while (hp > 0) {
		cout << "Enter Raw damage :" << endl;
		cin >> rd;

		if (rd % 5 == 0 && rd > 100) {
			ad = 2 * rd;
			ad = ad - 20;
		}
		else if (rd % 5 == 0) {
			ad = 2 * rd;
		}
		else if (rd > 100) {
			ad = rd - 20;
		}
		else {
			ad = rd;
		}

		if (ad < 0) {
			ad = 0;
		}

		attack++;
		sumrd += rd;
		sumad += ad;
		hp -= ad;
		if (hp < 0) {
			hp = 0;
		}

		cout << "Attack " << attack << ": Raw=" << rd << " Actual=" << ad << endl;
	}

	cout << "Dragon defeated !" << endl;
	cout << "Attacks :" << attack << endl;
	cout << "Total Raw Damage :" << sumrd << endl;
	cout << "Total Actual Damage :" << sumad << endl;
	cout << "Final HP :" << hp << endl;

	return 0;
}*/