#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number";
    cin>>num;
    int count=0;
    while(num!=0)
    {
        if(num&1==1)
        {
            count=count+1;
        }
        num=num>>1;
    }
    cout<<"set count is"<<count;
    return 0;
}