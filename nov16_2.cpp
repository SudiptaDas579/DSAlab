#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1;

    vector <int> v2(3,5);  // 3 values every value 5. means v2 = {5,5,5}

    vector <int> v3 ={1,2,3};

    for(int i=0 ; i<v3.size();i++)
    {
        cout<<v3[i]<<endl;
    }
    cout<<endl;

    v3.push_back(555);

    for(int i=0 ; i<v3.size();i++)
    {
        cout<<v3[i]<<endl;
    }

    v3.insert(v3.begin()+1,90);

    cout<<endl;

    for(int i=0 ; i<v3.size();i++)
    {
        cout<<v3[i]<<endl;
    }

}
