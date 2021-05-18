#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,res,pos;
    cout<<"enter number";
    cin>>num;
    cout<<"enter position";
    cin>>pos;
    if(num&((pos-1)<<1))
    {
        cout<<"given number is set ";
    }
    else
    {
        cout<<"not set";
    }
    return 0;
}