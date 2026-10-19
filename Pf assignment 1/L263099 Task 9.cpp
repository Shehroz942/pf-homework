#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declaring variables
    int p, n, t;
    float ci, r, finalamount;
    cout << "enter initial amount:";
    cin >> p;
    cout << "enter annual interest rate:";
    cin >> r;
    cout << "enter compounds per year :";
    cin >> n;
    cout << "enter number of years :";
    cin >> t;
    // Pocessing starts from here
    r = r / 100;
    finalamount = p * pow(1 + r / n, n * t);
    cout << "Final amont :" << finalamount << endl;
    ci = finalamount - p;
    cout << "Compound interest :" << ci << endl;
    // Desired output came







    return 0;
}
