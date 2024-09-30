// 8. Write a C++ program to count the number of elements in an integer Array using Function
#include<iostream>
using namespace std;
int countElement(int arr[],int size)
{
    return size;
}
int main()
{
    int n;
    cout<<" enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<" the elements are : \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" the number of elements in the array : "<<countElement(arr,n)<<endl;
    return 0;
}