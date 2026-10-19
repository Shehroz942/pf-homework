#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	int len, wid, pathwid, fencecost, pavecost, turfcost;
	cout << "Enter lenght :";
	cin >> len;
	cout << "Enter width :";
	cin >> wid;
	cout << "Enter path width :";
	cin >> pathwid;
	cout << "Enter fence cost :";
	cin >> fencecost;
	cout << "Enter pave cost :";
	cin >> pavecost;
	cout << "Enter turf cost :";
	cin >> turfcost;
	// Processing starts from here
	cout << "Garden area is :" << len * wid << endl;
	int lawnarea = (len - (2 * pathwid)) * (wid - (2 * pathwid));
	cout << "Lawn area is :" << lawnarea << endl;
	int patharea = (len * wid) - lawnarea;
	cout << "path area is : " << patharea << endl;
	int perimeter = 2 * (len + wid);
	cout << "Peimeter is :" << perimeter << endl;
	int totalcost = (perimeter * fencecost) + (patharea * pavecost) + (lawnarea * turfcost);
	cout << "Total cost is :" << totalcost << endl;
	// Desired output came
	return 0;
}



