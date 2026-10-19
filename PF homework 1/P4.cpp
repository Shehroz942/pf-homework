/*#include <iostream>
using namespace std;
int main()
{
	int a, sum = 0, count=0,pro = 1, l=0, s=9, ed=0, od=0;
	cout << "Enter the value of a : ";
	cin >> a;
	while (a > 0)
	{
		int digit = a % 10;
		if (digit % 2 == 0) {
			ed++;
		}
		else
		{
			od++;
		}
		if (digit > l)
		{
			l = digit;
		}
		else if (digit < s)
		{
			s = digit;

		}
		sum += digit;
		pro *= digit;
		count++;
		a /= 10;
		



	}
	cout << "Digits: " << count << endl;
	cout << "Digits Sum: " << sum << endl;
	cout << "Digits Product: " << pro << endl;
	cout << "Largest Digit: " << l << endl;
	cout << "Smallest Digit: " << s << endl;
	cout << "Even Digits: " << ed << endl;
	cout << "Odd Digits: " << od << endl;
}*/