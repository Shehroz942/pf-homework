
/*#include <iostream>
using namespace std;
int main()
{
	int n, p, w,highestp,nl=0,nv=0,no=0,sumw=0,sump=0,loop=1;
	float avgp;
	cout << "Enter value of n :";
	cin >> n;
	if(n>0)
	{
		cout << "Enter value of w:";
		cin >> w;
		cout << "Enter value of p :";
		cin >> p;
		highestp = p;
		sumw += w;
		sump += p;
		if (w >= 100 && p >= 95) {
			nl++;
			nv++;
		
		}
		else if (w >= 50 && p >= 80) {
			nv++;
			
		}
		else {
			no++;
		}
		while (loop <= n-1)
		{
			cout << "Enter value of w:";
			cin >> w;
			cout << "Enter value of p :";
			cin >> p;
			if (highestp < p)
				highestp = p;
			sumw += w;
			sump += p;
			
			if (w >= 100 && p >= 95) {
				nl++;
				nv++;
			}
			else if (w >= 50 && p >= 80) {
				nv++;
			}
			else {
				no++;
			}
			
			
			loop++;
		}
		avgp = (float)sump / n;
		cout << "Total weight = " << sumw << endl;
		cout << "Legendary crytals = " << nl << endl;
		cout << "valuable crystals = " << nv << endl;
		cout << "Ordinary crytals = " << no << endl;
		cout << "Highest purity = " << highestp<< endl;
		cout << "Average purity = " << avgp << endl;










		






	}
}*/