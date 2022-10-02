//https://codeforces.com/problemset/problem/281/A
//Name: shajjad
//ID: 21225103142
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]>=97)
        s[0]=s[0]-32;

    /*Another soluation using function:

    s[0]=toupper(s[0]);
    */

    cout <<s<<endl;

}
