#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int coun=0,n;
    cin>>n;
    string s;

    cin>>s;
    for(int i=0;i<n;i++)
    {
         if (s[i]==s[i+1])
         {
             coun++;
    }
    }
    cout<<coun;


}
