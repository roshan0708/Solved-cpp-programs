#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll al,in;
    string res;
    string s,t;
    cin>>s>>t;
    al=abs((int)s[0]-(int)t[0]);
    in=abs(s[1]-t[1]);
    cout<<max(al,in)<<"\n";
    while(true)
    {
        if(s[0]==t[0] && s[1]==t[1])
            break;
        if(s[0]>t[0])
        {
            s[0]--;
            cout<<'L';
        }
        if(s[0]<t[0])
        {
            s[0]++;
            cout<<'R';
        }
        if(s[1]>t[1])
        {
            s[1]--;
            cout<<'D';
        }
        if(s[1]<t[1])
        {
            s[1]++;
            cout<<'U';
        }
        cout<<endl;
    }
    return 0;
}
