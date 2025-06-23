#include <iostream>
using namespace std;

int main() {
    double monthlySalary = 6000;
    double percent1 = 5;
    double percent2 = 7;
    double percent3 = 10;

    double contribution1 = monthlySalary * percent1 / 100;
    double contribution2 = monthlySalary * percent2 / 100;
    double contribution3 = monthlySalary * percent3 / 100;

    cout << "Amount of contribution at " << percent1 << "% is $" << contribution1 << endl;
    cout << "Amount of contribution at " << percent2 << "% is $" << contribution2 << endl;
    cout << "Amount of contribution at " << percent3 << "% is $" << contribution3 << endl;

    return 0;
}