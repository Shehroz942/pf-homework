#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	int h, m, s, sa, hs, ms, ts, ch, cm, cs;
	cout << "Enter current hour :";
	cin >> h;
	cout << "Enter current minutes :";
	cin >> m;
	cout << "Enter current seconds :";
	cin >> s;
	cout << "Enter seconds to add :";
	cin >> sa;
	// Processing starts from here
	hs = h * 3600;
	ms = m * 60;
	ts = (hs + ms + s + sa) % 86400;
	ch = ts / 3600;
	cm = (ts % 3600) / 60;
	cs = ts % 60;
	cout << ch << ":" << cm << ":" << cs << endl;
	// Desired output came
	return 0;

}