#include <iostream>
using namespace std;


int main() {
    int x, y;

    cout << "GCD Computation" << endl;

    cout << "Insert the first value: ";
    cin >> x;
    cout << "Insert the second value: ";
    cin >> y;
    cout << endl;

    while (x != y) {
        if (x > y){
            x = x - y;
        } else {
            y = y - x;
        }
    }
    
    cout << "Greatest Common Divisor: " << x << endl;
    return 0;
}