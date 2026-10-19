#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int totalbytes, packetsize;
    cout << "enter total bytes :";
    cin >> totalbytes;
    cout << "enter Packet Size :";
    cin >> packetsize;
    // Processing starts from here
    cout << "Full Bytes to Transmit :" << totalbytes / packetsize << endl;
    cout << "Left Over Bytes :" << totalbytes % packetsize << endl;
    // Desired output came
    return 0;
}
