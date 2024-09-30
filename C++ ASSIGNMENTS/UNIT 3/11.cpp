// 11. Write a C++ Program to enter 10 student details (Roll,Name) using array of Object.
#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollno;
    void get()
    {
        cout << " enter name : ";
        cin >> name;
        cout << " enter a roll no : ";
        cin >> rollno;
    }
    void display()
    {
        cout << " name is : " << name << endl;
        cout << " roll no is : " << rollno << endl;
    }
};
int main()
{
    Student s1[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the data for students " << i << endl;
        s1[i].get();
    }
    cout << ".........................................................\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "the data of student " << i << endl;
        s1[i].display();
    }
    return 0;
}