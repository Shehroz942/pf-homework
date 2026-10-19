#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	int n5000, n1000, n100, n10, x;
	cout << "enter amount:";
	cin >> x;
	// Processing starts from here
	n5000 = x / 5000;
	cout << "Rs.5000 notes : " << n5000 << endl;
	x = x % 5000;
	n1000 = x / 1000;
	cout << "Rs.1000 notes :" << n1000 << endl;
	x = x % 1000;
	n100 = x / 100;
	cout << "Rs.100 notes : " << n100 << endl;
	x = x % 100;
	n10 = x / 10;
	cout << "Rs.10 notes :" << n10 << endl;
	// Desired output came
	return 0;
}