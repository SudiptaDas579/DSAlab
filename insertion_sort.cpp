#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector <int> &a)
{
    for(int i =1 ; i< a.size();  i++)
    {
       int key = a[i];
       int j= i-1;

       while(j>=0 && key > a[j])
       {
           a[j+1] = a[j];
           j--;
       }
       a[j+1]=key;
    }
}

int main()
{
    cout<<"Enter how many numbers you want to enter: "<<endl;
    int n;
    cin>>n;
    vector <int> a;

    for(int i=0; i<n ; i++)
    {
        int p;
        cin>>p;
        a.push_back(p);
    }

    insertionSort(a);

    for(int i=0; i<n ; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}



