// 10. Write a C++ program to enter employee details like name & Salary using Array of Object
#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    void get()
    {
        cout << " enter name : ";
        cin >> name;
        cout << " enter salary : ";
        cin >> salary;
    }
    void print()
    {
        cout << " mame is : " << name << endl;
        cout << " salary is : " << salary << endl;
    }
};
int main()
{
    Employee e1[3];
    for (int i = 0; i < 3; i++)
    {
        cout << " enter detail for emplpoyeee " << i << endl;
        e1[i].get();
    }
    cout << "......................................................\n";
    for (int i = 0; i < 3; i++)
    {
        cout << " display detail for emplpoyeee " << i << endl;
        e1[i].print();
    }
    return 0;
}