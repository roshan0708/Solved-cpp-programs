#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define ull unsigned long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define pi acosl(-1)
#define sqr(x) ((x)*(x))
#define mod (1000*1000*1000+7)
#define pdd pair<double,double>
#define MEMS(x) memset(x,-1,sizeof(x))
#define MEM(x) memset(x,0,sizeof(x))
ll power(ll x,ull y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,S,x,i,k,j,t,m,temp,sum,t1,t2;
    bool ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>S;
        temp=sum=0;
        ans=true;
        t1=S/n;
        t2=S%n;
        if(t1<=a && t2<=b)
            cout<<"YES\n";
        else if(t1>a)
        {
            temp=t1;
            t1=a;
            t2=t2+(n*(temp-a));
            if(t1<=a && t2<=b)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
