//https://codeforces.com/problemset/problem/617/A
//Name: shajjad
//ID: 21225103142
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0, x;
    cin>>x;
    if(x%5==0)
    {
        p=x/5;
        cout<<p;
    }
    else
    {
        p=x/5;
        p=p+1;
        cout<<p;
    }

}
