#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
    private:
        string name;
        int id;
        double hourlyWage;
        double hoursWorked;
    public:
        Employee(string n, int i, double hw) {
            name = n;
            id = i;
            hourlyWage = hw;
            hoursWorked = 0;
        }
        string getName() { return name; }
        void addHours(double hours) { hoursWorked += hours; }
        double calculatePay() { return (hourlyWage * hoursWorked); }
};

int main() {

    vector<Employee> employees;

   
    employees.push_back(Employee("John Smith", 1001, 15.0));
    employees.push_back(Employee("Jane Doe", 1002, 20.0));

    
    employees[0].addHours(40);
    employees[1].addHours(35);

    
    cout << "Payroll Report:" << endl;
    cout << "----------------" << endl;
    for (int i = 0; i < employees.size(); i++) {
        cout << employees[i].getName() << ": $" << employees[i].calculatePay() << endl;
    }

    return 0;
}
