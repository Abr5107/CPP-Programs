
#include <iostream>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "Roll number: " << s.roll << endl;
    cout << "Marks: " << s.marks;

    return 0;
}
