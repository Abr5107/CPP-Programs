
#include <iostream>
using namespace std;

enum Signal { RED, YELLOW, GREEN };

int main() {
    Signal s = RED;

    if (s == RED)
        cout << "Stop";
    else if (s == YELLOW)
        cout << "Get Ready";
    else
        cout << "Go";

    return 0;
}
