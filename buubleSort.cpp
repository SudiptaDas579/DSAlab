#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-i-1 ;i++)                  //-i as the values from the last is already sorted so no need to swap the last
    {
        for(int j=0; j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter array numbers: "<<endl;
    for(int i=0; i<n ; i++)
    {
        cin>>a[i];
    }

    bubbleSort(a,n);

    cout<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<a[i]<<endl;
    }
}
