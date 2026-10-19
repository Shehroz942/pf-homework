/* #include <iostream>
using namespace std;
int main()
{
	int n, t,loop,scrapchest=0,ordinarychest=0,sum=0,rarechest=0,legendarychest=0,highest;
	loop = 1;
	float avg;
	cout << "Enter number of treasure chests :";
	cin >> n;
	if (n > 0)
	{
		cout << "Enter gold value :";
		cin >> t;
		highest = t;
		sum += t;
		if (t < 100)
			scrapchest++;
		else if (t >= 100 && t <= 999)
			ordinarychest++;
		else if (t >= 1000 && t <= 4999)
			rarechest++;
		else
			legendarychest++;


		while (loop < n )
		{


			if (t < 100)
				scrapchest++;
			else if (t >= 100 && t <= 999)
				ordinarychest++;
			else if (t >= 1000 && t <= 4999)
				rarechest++;
			else
				legendarychest++;

			cout << "Enter gold value :";
			cin >> t;
			sum += t;
			if (highest < t)
			{
				highest = t;
			}

			loop++;
		}
		cout << "Highest: " << highest;
		avg = (float)sum / n;
		cout << "\n Total Treasure : " << sum;
		cout << "\nScrap Chest : " << scrapchest;
		cout << "\nOrdinary Chest : " << ordinarychest;
		cout << "\nRare Chest : " << rarechest;
		cout << "\nLegendary Chest : " << legendarychest;
		cout << "\nAverage value : " << avg;
	}
	else
		cout << "Enter positive number ";


}*/
