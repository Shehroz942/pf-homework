#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int chirpspermin, temp;
    cout << "enter chirps per minute :";
    cin >> chirpspermin;
    // Processing starts from here
    temp = 50 + (chirpspermin - 40) / 4;
    cout << "Estimated Temperature :" << temp;
    // Desired output came


    return 0;
}
