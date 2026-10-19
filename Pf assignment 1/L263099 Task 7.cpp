#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	int num, numh, numt, numo;
	cout << "Enter three digit number :";
	cin >> num;
	// Processing starts from here
	numh = num / 100;
	cout << "Hundreds digit :" << numh << endl;
	num = num % 100;
	numt = num / 10;
	cout << "Tens digit : " << numt << endl;
	num = num % 10;
	numo = num;
	cout << "Ones digit :" << numo << endl;
	cout << "Sum of digits :" << numo + numt + numh << endl;
	cout << "Reversed nmber is :" << numo << numt << numh << endl;
	// Desired output came
	return 0;

}