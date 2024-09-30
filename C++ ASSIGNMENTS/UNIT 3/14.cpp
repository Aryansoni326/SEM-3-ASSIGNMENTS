// 14. Write a C++ Program by entering a string a string anf find out the capacity of the string.
#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<" enter a string : ";
    cin>>s1;
    cout<<" the capacity of string is : "<<s1.capacity()<<endl;
    return 0;
}