#include <iostream>
using namespace std;
int main()

{
	// Declaring variables
	int sec, hour, min, remainingseconds;
	cout << "Enter seconds :";
	cin >> sec;
	// processing starts from here
	hour = sec / 3600;
	sec = sec % 3600;
	min = sec / 60;
	sec = sec % 60;
	remainingseconds = sec;
	cout << "Total seconds become :" << hour << "hour," << min << "minute," << remainingseconds << "seconds";
	// Desired output came
	return 0;
}