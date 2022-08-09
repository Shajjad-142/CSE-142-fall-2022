//https://codeforces.com/problemset/problem/236/A
//Name: shajjad
//ID: 21225103142
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,b=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
            continue;
        else
            b++;
    }
        if(b%2==0)
            cout <<"CHAT WITH HER!"<<endl;
        else
            cout <<"IGNORE HIM!"<<endl;

}

