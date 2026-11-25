#include <iostream>
using namespace std;

int main() {
    int a = 45;
    int b = 4;

    cout << "a / b (int): " << (a / b) << endl;
    cout << "a / b (float cast): " << (float)a / b << endl;
    cout << "a / b (static_cast): " << static_cast<double>(a) / b << endl;

    float price = 99.85f;
    int wholeRupees = (int)price;
    cout << "price float: " << price << endl;
    cout << "price to int: " << wholeRupees << endl;

    return 0;
}
