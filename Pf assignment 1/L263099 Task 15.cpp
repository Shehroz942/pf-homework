#include <iostream>
using namespace std;

int main() {
    // Declaring variables;
    float x, y;
    cout << "x = ";
    cin >> x;
    // Processing starts from here
    y = (3 * x * x * x * x) - (2 * x * x * x) + x - 7;
    cout << "Stress factor y :" << y << endl;
    // Desired output came
    return 0;
}
