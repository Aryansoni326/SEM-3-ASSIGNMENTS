// 5. Write a C++ program to Enter array elements and print those elements.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter a elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << " enter a value of element " << i << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << " element at index " << i << " is : " << arr[i] << endl;
    }
    return 0;
}