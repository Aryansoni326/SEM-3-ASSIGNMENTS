// 18. Write a C++ Program to enter two strings from user and append first string to another string.
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

    s1.append(s2);
    cout << " after appending  ..........\n";
    cout<<" after append string is : "<<s1<<endl;
    return 0;
}