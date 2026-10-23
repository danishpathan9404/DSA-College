#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int a[20];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter"<<n<<"Integers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"enter the target element search for:";
    cin>>x;
    int location=linear_search(a,n,x);
    if (location !=-1)
    {
        cout<<"element"<<x<<"found at index:"<<location<<endl;
    }
    {
        cout<<"element"<<x<<"not found in the array."<<endl;
    }
    return 0;
}


//output 
PS C:\Danish Pathan 226> cd "c:\Danish Pathan 226\" ; if ($?) { g++ array.cpp -o array } ; if ($?) { .\array }
enter the size of array:5
enter5Integers:
1
2
3   
4
5
enter the target element search for:3
element3found at index:2
element3not found in the array.
PS C:\Danish Pathan 226>