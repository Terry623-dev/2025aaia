///week12-3a.cpp
///SOIT108_base_008
#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;

    // 使用 double 避免整數除法提前截斷
    double speed = 1.2 * 3600 / seconds;

    cout << (int)speed;  // 無條件捨去（取整數部分）

    return 0;
}
