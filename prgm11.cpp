
#include <iostream>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student s;

    s.roll = 101;
    s.marks = 85.5;

    cout << "Roll number: " << s.roll << endl;
    cout << "Marks: " << s.marks;

    return 0;
}
