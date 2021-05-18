#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos,res;
    cout<<"enter number";
    cin>>num;
    cout<<"enter position";
    cin>>pos;
    res=num^((pos-1)<<1);
    cout<<res;
    return 0;
}