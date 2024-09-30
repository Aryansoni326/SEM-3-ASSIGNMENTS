// 15. Write a C++ program to resize the string by 10.
#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<" enter a string : ";
    cin>>s1;
    cout<<" your stirng is : "<<s1<<endl;
    s1.resize(10);
    cout<<" after resize string is : "<<s1<<endl;
    return 0;
}