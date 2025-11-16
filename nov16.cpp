#include<iostream>
using namespace std;

int main (){
    /*cout<<"Hello World"<<endl;
    int a, b;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    int c=a+b;

    cout<<a<<" + "<<b<<" = "<<c<<endl;*/   //or a+b in place of c
    int a,b,c;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<a<<" is the largest number"<<endl;

    }
    else  if(b>a && b>c)
    {
        cout<<b<<" is the largest number"<<endl;
    }
    else cout<<c<<" is the largest number"<<endl;




}
