#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long a,b,c,d,count4=0,count7=0;
    cin>>s;
    for(a=0;a<s.length();a++)
    {
        if(s[a]=='4')
        count4++;
        else if(s[a]=='7')
        count7++;
        else continue;
    }
    if(count4==0 && count7==0)
    cout<<"-1\n";
    else if(count4==count7 || count4>count7)
    cout<<"4\n";
    else
    cout<<"7\n";
    return 0;
}
