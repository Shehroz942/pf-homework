/*#include <iostream>
using namespace std;
int main()
{
	int loop = 1, sc, aa, attempt = 0;
	cout << "Enter Secret Code :" << endl;
	cin >> sc;
	cout << "Enter Attempts Allowed :" << endl;
	cin >> aa;
	double energy = 100.0;
	double cost = 100.0 / aa;
	bool unlocked = false;
	while (loop <= aa)
	{
		int gc;
		cout << "Enter Guessed Code :" << endl;
		cin >> gc;
			if (gc < sc)
			{
				cout << "Attempt" << loop << ":"  "Too Low" << endl;
				attempt++;
				energy -= cost;
			}
			else if (gc > sc)
			{
				cout << "Attempt" << loop << ":"  "Too High" << endl;
				attempt++;
				energy -= cost;
			}
			else if (gc == sc)
			{
				cout << "Attempt" << loop <<":"  "Correct !" << endl;
				cout << "VAULT UNLOCKED !" << endl;
				attempt++;
				unlocked = true;
				break;
			}
		loop++;
	}
	

	if (!unlocked)
	{
		cout << "VAULT STATUS : LOCKED " << endl;
	}
	cout << "Attempts Used :" << attempt << endl;
	cout << "Energy Remaining :" << energy << endl;



	

}*/