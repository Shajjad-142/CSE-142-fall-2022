//https://codeforces.com/problemset/problem/546/A
//Name: shajjad
//ID: 21225103142
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int p=0,q=0,k,n,w;
    cin>>k>>n>>w;
     for(int i=1;i<=w;i++)
    {
        p=i*k;
        q=q+p;
    }
    q=q-n;
    if(q<0)
    cout<<0;

    else
    cout<<q;


}
