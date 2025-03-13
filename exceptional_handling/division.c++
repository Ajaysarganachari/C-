#include<iostream>
using namespace std;

int main()
{
    try
    {
        int num=2;
        if(num/7)
        {
            cout<<"congratulation you are passed\n";
        }
        else
        {
            throw(num);
        }
    }
    catch(int n)
    {
        cout<<"Sorry to say you are Fail..\n";
        cout<<"num is:"<<n;
    }
    return 0;
}
