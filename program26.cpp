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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,i,j,k,l,temp=0,ans=0,sum=0;
    cin>>n>>m;
    vll a(n);
    rep(i,n)
    {
    	cin>>a[i].ff>>a[i].ss;
    	sum+=a[i].ff;
    }
    sort(all(a),[&](pll a, pll b){ return (a.ff-a.ss > b.ff-b.ss);});
    rep(i,n)
    {
    	if(sum>m)
    	{
    		sum=sum-a[i].ff+a[i].ss;
    		ans++;
    	}
    	else
    	break;
    }
    if(sum>m)
    cout<<"-1"<<endl;
    else
    cout<<ans<<endl;
    return 0;
}
