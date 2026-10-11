
#include <iostream>
using namespace std;

enum Day { MON = 1, TUE, WED, THU, FRI };

int main() {
    Day d = WED;

    switch (d) {
        case MON: cout << "Monday"; break;
        case TUE: cout << "Tuesday"; break;
        case WED: cout << "Wednesday"; break;
        case THU: cout << "Thursday"; break;
        case FRI: cout << "Friday"; break;
    }

    return 0;
}
