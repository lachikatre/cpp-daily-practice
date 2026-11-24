#include <iostream>
using namespace std;

int alertCount = 0; // Global variable

void triggerAlert() {
    alertCount = alertCount + 1; // Global state update kar raha hai
}

int main() {
    triggerAlert();
    triggerAlert();

    cout << "Total alerts: " << alertCount << endl;
    return 0;
}
