/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	int hp = 100, g = 0, s = 0, a,n,e=0,loop=1;
	string r;
	cout << "Enter value of n :";
	cin >> n;
	while (loop <= n)
	{
		cout << "Enter value of a :";
		cin >> a;
		if (a == 1)
		{
			hp -= 20;
		}
		else if (a == 2)
		{
			g += 100;
			s += 10;
		}
		else if (a == 3)
		{
			hp -= 15;
			s -= 5;
		}
		else if (a == 4)
		{
			hp += 25;
		}
		else if (a == 5)
		{
			g += 250;
			if (hp < 40)
			{
				s += 50;
			}
			else
			{
				s += 30;
			}
		}

		if (hp > 100)
		{
			hp = 100;
		}

		if (hp <= 0)
		{
			break;
		}

		e++;
		loop++;
	}
	if (s >= 100)
	{
		r = "LEGENDARY TREASURE HUNTER";
	}
	else if (s >= 50)
	{
		r = "MASTER EXPLORER";
	}
	else if (s >= 20)
	{
		r = "SURVIVOR";
	}
	else
	{
		r = "NOVICE";
	}
	cout << "EXPEDITION COMPLETE" << endl;
	cout << "Final HP: " << hp << endl;
	cout << "Gold: " << g << endl;
	cout << "Score: " << s << endl;
	cout << "Encounters Survived: " << e << endl;
	cout << "Rank: " << r << endl;

}*/