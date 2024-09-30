// 17. Write a C++ Program to enter two strings from user and Swap those string using function
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << " enter a string 1 : ";
    cin >> s1;
    cout << " enter a string 2 : ";
    cin >> s2;

    cout << " the first string is : " << s1 << endl;
    cout << " the second string is : " << s2 << endl;

    s1.swap(s2);

    cout << " after swapping ..........\n";
    cout << " the first string is : " << s1 << endl;
    cout << " the second string is : " << s2 << endl;
    return 0;
}