// 4.Write a C++ program to find the largest element of a given array of integers using Function.
#include<iostream>
using namespace std;
void arr(int a[5])
{
    int max=0;
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<" maxixmum is : "<<max<<endl;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<" enter a element : ";
        cin>>a[i];
    }
    arr(a);
    return 0;

}