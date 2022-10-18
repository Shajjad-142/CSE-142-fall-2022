
//https://codeforces.com/problemset/problem/791/A
//Name: shajjad
//ID: 21225103142
#include<bits/stdc++.h>
using namespace std;
int main ()
/*{
    int i,a,b;
    cin>>a>>b;
    for(i=1;;i++)
    {
        a=3*a;
        b=2*b;
        if(a>b)
            break;
    }
    cout <<i;
}
*/
//Another way................................................................................................................
{
    int i=0,a,b;
    cin>>a>>b;
    if(a>b)
        i=0;
    else
    {
        while(a<=b)
        {
            a=3*a;
            b=2*b;
            i++;

        }
 }
 cout<<i;
}
