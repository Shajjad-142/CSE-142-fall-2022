//https://codeforces.com/contest/4/problem/A
//Name: shajjad
//ID: 21225103142
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;

    cin>>n;
    for(int i=0;i<n;i++)
    {
         string s;
        cin>>s;
        if (s.length()>10)
       {
           cout << s[0] << s.length()-2 << s[s.length()-1]<< endl;
       }
        else
            cout<<s<<endl;
    }
}
