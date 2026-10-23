#include<iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    for (int i=0; i<n-1;i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp= a[j];
                a[j] = a[j+1];
                a[j + 1]=temp;

            }
        }
    }
    
}
int main()
{
    int n;
    int a[10];
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter"<<n<<"intergers in any order:"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    cout<<"sorted array:";
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return 0;

}


\\output 
PS C:\Danish Pathan 226> cd "c:\Danish Pathan 226\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
enter the size of the array:5
enter5intergers in any order:
9
8
7
6
4
sorted array:4 6 7 8 9 
PS C:\Danish Pathan 226>