#include <iostream>
using namespace std;
int main() {
    // Declaring variables
    int age, clearance, overridecode, access;
    cout << "enter age :";
    cin >> age;
    cout << "enter clearance :";
    cin >> clearance;
    cout << "enter over ride code :";
    cin >> overridecode;
    // Processing starts from here
    access = (age >= 18 && clearance > 3) || (overridecode == 999);
    cout << "Access Granted :" << access;
    // Desired output came
    return 0;
}
