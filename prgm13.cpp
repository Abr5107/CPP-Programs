
#include <iostream>
using namespace std;

struct Student {
    int roll;
    int marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter roll and marks: ";
        cin >> s[i].roll >> s[i].marks;
    }

    for (int i = 0; i < 3; i++) {
        cout << s[i].roll << " "
             << s[i].marks << endl;
    }

    return 0;
}
