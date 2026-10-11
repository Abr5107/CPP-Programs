
#include <iostream>
using namespace std;

struct Employee {
    int id;
    float salary;
};

int main() {
    Employee e;

    cout << "Enter employee ID: ";
    cin >> e.id;

    cout << "Enter salary: ";
    cin >> e.salary;

    if (e.salary >= 30000)
        cout << "Salary is 30000 or above";
    else
        cout << "Salary is below 30000";

    return 0;
}
