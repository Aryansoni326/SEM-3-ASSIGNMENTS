// 6. Write a C++ program to find the Smllest element of a given array of integers pass array
// arguements in a Function. 
#include<iostream>
using namespace std;
void min(int a[5])
{
    int min=0;
    for(int i=1;i<5;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<" minimum is : "<<min<<endl;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<" enter a elements : ";
        cin>>a[i];
    }
    min(a);
    return 0;
}