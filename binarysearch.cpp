#include<iostream>
using namespace std;
int binary_search(int a[], int n,int x)
{
    int first=0;
    int last = n-1;
    int mid;
    while(first <=last)
    {
        mid =(first + last)/2;
        if (a[mid]==x)
        {
            return mid;
        }
        else if (a[mid] < x)
        {
            first=mid+1;
        }
        else
            {
                last= mid-1;
            }
        
    }
    return -1;
}
int main()
{
    int n,x;
    int a[20];
    cout<<"enter the size of the aray:";
    cin>>n;
    cout<<"enter"<<n<<"sorted integers:\n";
    for (int i=0;i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the target element to search for:";
    cin>>x;
    int position= binary_search(a,n,x);
    if (position != -1)
    cout<<"element found at position:"<<position<<endl;
    else 
        cout<<"element not found." <<endl;
        return 0;
}      

\\output
PS C:\Danish Pathan 226> cd "c:\Danish Pathan 226\" ; if ($?) { g++ binarysearch.cpp -o binarysearch } ; if ($?) { .\binarysearch }
enter the size of the aray:5
enter5sorted integers:
9
5
4
3
1
enter the target element to search for:4
element found at position:2
PS C:\Danish Pathan 226> 