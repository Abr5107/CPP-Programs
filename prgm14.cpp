
#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s[3];
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Enter marks: ";
        cin >> s[i].marks;
        sum += s[i].marks;
    }

    cout << "Average = " << sum / 3.0;

    return 0;
}
