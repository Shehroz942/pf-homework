#include <iostream>
using namespace std;
int main()
{
	// declaring variables
	long population, p0, time, t, hour, min;
	cout << "enter p0 :";
	cin >> p0;
	cout << "enter t :";
	cin >> t;
	// Processing starts from here 
	population = p0 * 2;
	population = population * 2;
	population = population * 2;
	time = t * 3;
	hour = time / 60;
	min = time % 60;
	cout << "you final poplation is :" << population << endl;
	cout << "our elapsed time is " << hour << "hours" << min << "minutes";
	// Desired output came
	return 0;


}