#include <iostream>
using namespace std;

{  
	// Declaring variables
	int id, code, d1, d2, d3, d4;
	cout << " Enter code :";
	cin >> id;
	// Processing starts from here
	d1 = id / 1000;
	id = id % 1000;
	d2 = id / 100;
	id = id % 100;
	d3 = id / 10;
	id = id % 10;
	d4 = id;
	code = (d1 * 4 + d2 * 3 + d3 * 2 + d4 * 1) % 9;
	cout << "Digits :" << d1 << "\t" << d2 << "\t" << d3 << "\t" << d4 << endl;
	cout << "Verification code :" << code << endl;
	cout << "Mirror Id :" << d4 << d3 << d2 << d1;
	//Desired output came
}