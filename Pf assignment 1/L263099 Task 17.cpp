#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int x1, x2, y1, y2, z1, z2;
    cout << " x1 = ";
    cin >> x1;
    cout << " x2 = ";
    cin >> x2;
    cout << " y1 = ";
    cin >> y1;
    cout << " y2 = ";
    cin >> y2;
    cout << " z1 = ";
    cin >> z1;
    cout << " z2 = ";
    cin >> z2;
    // Processing starts from here 
    int D2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1);
    cout << "Squared Distance: " << D2;
    // Desired output came

    return 0;
}
