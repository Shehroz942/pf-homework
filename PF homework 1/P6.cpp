/*#include <iostream>
using namespace std;
int main()
{
	int n, loop = 1,s=0,c=0,e=0,ss=0,cs=0,ls=0,sc=0;
	cout << "Enter value of n :";
	cin >> n;
	while (loop <= n)
	{
		int a;
		cin >> a;
		
		if (a > 0)
		{
			s++;
			ss += a;
		}
		else if (a < 0)
		{
			
			c++;
			cs += a;
			if (c == 1)
			{
				sc = a;
			}
			else if (a < sc)
			{
				sc = a;
			}
		}
		else
		{
			e++;
		}

		if (ls < a)
		{
			ls = a;
		}
		loop++;

		




	}
	cout << "SAFE: " << s << endl;
	cout << "CURSED: " << c << endl;
	cout << "EMPTY: " << e << endl;
	cout << "SAFE SUM: " << ss << endl;
	cout << "CURSED SUM: " << cs << endl;
	cout << "LARGEST SAFE: " << ls << endl;
	cout << "SMALLEST CURSED: " << sc << endl;
	if (ss > -cs)
		cout << "CHEST STATUS: SAFE " << endl;
	else
		cout << "CHEST STATUS: CURSED" << endl;


	
}*/