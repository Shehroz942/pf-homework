#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	int m;
	float v, ke;
	cout << "Enter mass :";
	cin >> m;
	cout << "Enter velocity :";
	cin >> v;
	// Processing starts from here
	ke = (m * v * v) / 2;
	cout << "Kinetic energy is :" << ke << endl;
	// Desired output came
	return 0;
}