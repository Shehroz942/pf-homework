#include <iostream>
using namespace std;
int main()
{
	// Declaring variables
	int d1, d2, d3, t1, t2, t3;
	cout << "enter d1 :";
	cin >> d1;
	cout << "enter d2 :";
	cin >> d2;
	cout << "enter d3 :";
	cin >> d3;
	cout << "enter t1 :";
	cin >> t1;
	cout << "enter t2 :";
	cin >> t2;
	cout << "enter t3 :";
	cin >> t3;
	// Processing starts from here
	int totaldistance = d1 + d2 + d3;
	int totaltime = t1 + t2 + t3;
	float avgspeed = (float)(d1 + d2 + d3) / (t1 + t2 + t3);
	float v2 =(float) d2 / t2;
	float speeddifference = v2 - avgspeed;
	cout << " Total distance is :" << totaldistance << endl;
	cout << " Total time is :" << totaltime << endl;
	cout << "Average speed is :" << avgspeed << endl;
	cout << "Runner 2's speed is :" << v2 << endl;
	cout << "Speed difference between runner 2 and average speed is:" << v2 - avgspeed << endl;
	// Desired output came
	return 0;
}

