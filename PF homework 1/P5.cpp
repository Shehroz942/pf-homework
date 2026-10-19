/*#include <iostream>
using namespace std;
int main()
{
	int n, l = 0, sl = 0, s, loop = 1;
	cout << "Enter the value of n : ";
	cin >> n;
	while (loop <= n)
	{
		int digit;
		cin >> digit;

		if (loop == 1)
		{
			s = digit;
		}

		if (l < digit)
		{
			sl = l;
			l = digit;
		}
		else if (digit > sl)
		{
			sl = digit;
		}

		if (digit < s)
		{
			s = digit;
		}

		loop++;
	}
	cout << "Largest :" << l << endl;
	cout << "Second Largest :" << sl << endl;
	cout << "Smallest :" << s << endl;
}*/