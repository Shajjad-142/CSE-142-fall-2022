
//Name: shajjad
//ID: 21225103142
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=(a+s)-b;
        if(sum<0)
            s=0;
        else
            s=sum;
    }
    cout<<sum<<endl;
    return 0;
}
