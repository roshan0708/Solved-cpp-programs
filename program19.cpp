#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,i,j,k,l,ch,pro1,pro2,ans;
    const unsigned int M = 1000000007;
    cin>>t;
    while(t--)
    {
        pro1=0;
        pro2=0;
        cin>>n;
        vector<ll> arr;
        for(i=0;i<n;i++)
        {
            cin>>ch;
            arr.push_back(ch);
            if(arr[i]-i<=0)
            pro1=(pro1)%M;
            else
            pro1=(pro1+arr[i]-i)%M;
        }
        sort(arr.begin(),arr.end(),greater<ll>());
        for(i=0;i<n;i++)
        if(arr[i]-i<=0)
        pro2=(pro2)%M;
        else
        pro2=(pro2+arr[i]-i)%M;
        ans=pro1>=pro2?pro1:pro2;
        cout<<ans<<"\n";
    }
    return 0;
}
