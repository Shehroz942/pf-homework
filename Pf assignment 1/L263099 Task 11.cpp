#include <iostream>
using namespace std;

int main() {
    // declaring variables
    int math, phy, programming;
    float avgmarks;
    cout << "Math marks :";
    cin >> math;
    cout << "Physics marks :";
    cin >> phy;
    cout << "Programming marks :";
    cin >> programming;
    // processing starts from here
    avgmarks = (math + phy + programming) / 3.0;
    cout << "Average marks :" << avgmarks;
    // Desired output came


    return 0;
}
