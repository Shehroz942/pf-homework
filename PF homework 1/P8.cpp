/*#include <iostream>
using namespace std;
int main()
{
	int n,step=0,l=0;
	cout << "Enter value of n : ";
	cin >> n;
	cout << n << endl;
	if (l < n)
	{
		l = n;
	}
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			cout << n << endl;

		}

		else if (n % 2 == 1)
		{
			n = 3 * n + 1;
			cout << n << endl;

		}
		if (l < n)
		{
			l = n;
		}
		step++;

	}
	cout << "Steps :" << step << endl;
	cout << "Largest Value :" << l << endl;

}*/