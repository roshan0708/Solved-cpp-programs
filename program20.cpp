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
int main()
{
    ll n,i,j,k,l,ch,sum1=0,sum2=0;
    cin>>n;
    vl v1,v2;
    rep(i,n)
    {
        cin>>ch;
        v1.pb(ch);
    }
    sum1=accumulate(all(v1),0);
    rep(i,n)
    {
        cin>>ch;
        v2.pb(ch);
    }
    sum2=accumulate(all(v2),0);
    if(sum1<sum2)
        cout<<"No\n";
    else if(sum1==sum2)
        cout<<"Yes\n";
    else
    {
        if(n==1)
            cout<<"Yes\n";
        else if(sum1>sum2)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
