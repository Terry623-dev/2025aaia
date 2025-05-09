///week12-3b.cpp
///SOIT108_base_006
#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        cout << y << " is a leap year." << endl;
    } else {
        cout << y << " is not a leap year." << endl;
    }

    return 0;
}
