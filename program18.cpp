#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(vector<ll> s)
{
    for(ll i=0;i<s.size()-1;i++)
    {
        if(s[i+1]-s[i]>=6)
        continue;
        else
        return false;
    }
    return true;
}
int main()
{
    ll t,i,j,k,temp,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        vector<ll> s;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            s.push_back(i+1);
        }
        if(n==1)
        {
            if(arr[0]==1)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
        else
        {
            bool ans=solve(s);
            if(ans)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
}
