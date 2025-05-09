///week12-3c.cpp
///SOIT108_base_011
#include <iostream>
#include <cmath> // abs()
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int area = abs(x2 - x1) * abs(y2 - y1);
    cout << area; // ❌ 不要加 endl 或 \n

    return 0;
}
