#include <iostream>
using namespace std;

class Employee {
    private:
        char* name;
        int id;
        float salary;

    public:
        Employee() {
            name = new char[100];
            cout << "Enter name ID salary "<<endl;
            cin >> name>>id>>salary;

        }

        ~Employee() {
            delete[] name;
        }

        bool isPalindrome() {
            int len = 0;
            while (name[len]) len++;
            for (int i = 0; i < len / 2; i++)
                if (name[i] != name[len - i - 1])
                    return false;
            return true;
        }

        bool isPerfectNumber() {
            int sum = 0;
            for (int i = 1; i < id; i++)
                if (id % i == 0) sum += i;
            return sum == id;
        }

        void updateSalary(float newSal) {
            salary = newSal;
        }

        friend void display(Employee& e);
};

void display(Employee& e) {
    cout << "\nName: " << e.name << "\nID: " << e.id << "\nSalary: " << e.salary;
    if (e.isPalindrome()) cout << "\n(Name is Palindrome)";
    if (e.isPerfectNumber()) cout << "\n(ID is Perfect Number)";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of employees: "<<endl;
    cin >> n;

    Employee* emp = new Employee[n];
    for (int i = 0; i < n; i++) {
        cout << "Employee " << i + 1;
        display(emp[i]);
    }

    int idx;
    float newSal;
    cout << "Enter employee index (0 to " << n - 1 << ") to update salary: "<<endl;
    cin >> idx >> newSal;
    emp[idx].updateSalary(newSal);

    cout<<"After Update"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Employee " << i + 1 << endl;
        display(emp[i]);
    }
    delete[] emp;
    return 0;
}