#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n, int t[])
{
    for(int i=0; i<n-1 ;i++)
    {
        int min_index=i;

        for(int j=i+1; j<n ; j++)
        {
            if(t[j]<t[min_index]) min_index = j;
        }
        if(min_index!=i)
        {
            swap(a[i],a[min_index]);
            swap(t[i],t[min_index]);
        }
    }
}

int main()
{
    int arr[]= {55555,4444,-333,22,1};

    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    for(int i =0 ;i<n;i++)
    {
        if(arr[i]<0)
        {
            temp[i]=arr[i]*-1;
        }
        else temp[i]=arr[i];
    }
    selectionSort(arr,n,temp);

    for(int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

