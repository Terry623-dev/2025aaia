///week12-3a.cpp
///SOIT108_base_008
#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;

    // �ϥ� double �קK��ư��k���e�I�_
    double speed = 1.2 * 3600 / seconds;

    cout << (int)speed;  // �L����˥h�]����Ƴ����^

    return 0;
}
