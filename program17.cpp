#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,l,t,n,c,x,ans,v;
    cin>>t;
    while(t--)
    {
        v=0;
        cin>>n>>x;
        vector<ll> res;
        vector<ll> arr;
        for(i=0;i<n;i++)
         {
             cin>>c;
             arr.push_back(c);
         }
        sort(arr.begin(),arr.end());
        j=1;
        vector<ll>::iterator it;
        while(true)
        {
            if(v==x)
                break;
            it=find(arr.begin(),arr.end(), j);
            if(it!=arr.end())
            {
                res.push_back(j);
                ans=j;
                j++;
                continue;
            }
            else
                {
                    res.push_back(j);
                    j++;
                    v++;
                }
        }
        ll sizT;
        for(i=0;i<n;i++)
        {
            sizT=res.size();
            if(arr[i]==res[sizT-1]+1)
            {
                res.push_back(arr[i]);
            }
        }
        cout<<"\n"<<res.size()<<"\n";
    }
    return 0;
}
