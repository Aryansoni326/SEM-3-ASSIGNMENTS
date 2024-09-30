// 2. Write a c++ Program to illustrate the traversal of a 2D Array.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<" enter a rows : ";
    cin>>a;
    cout<<" enter a cols : ";
    cin>>b;
    int k[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"enter a element of ["<<a<<"] ["<<b<<"] : ";
            cin>>k[i][j];
        }
        
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"\t"<<k[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
    
}