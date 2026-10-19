#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int totalsec, hrs, min, sec;
    cout << "Enter total seconds :";
    cin >> totalsec;
    // Processing statrs from here
    hrs = totalsec / 3600;
    totalsec = totalsec % 3600;
    min = totalsec / 60;
    totalsec = totalsec % 60;
    sec = totalsec;
    cout << "Hours: " << hrs << "," " " "Minutes: " << min << "," " " "Seconds: " << sec << endl;
    // Desired output came

    return 0;
}
