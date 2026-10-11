
#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
    char letter;
};

int main() {
    Data d;

    d.number = 25;
    cout << "Integer: " << d.number << endl;

    d.decimal = 3.14;
    cout << "Float: " << d.decimal << endl;

    d.letter = 'A';
    cout << "Character: " << d.letter << endl;

    return 0;
}
