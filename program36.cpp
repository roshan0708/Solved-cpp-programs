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
    ll n,i,x,k,j,t,l,temp,sum1,sum2,ans;
    cin>>t;
    while(t--)
    {
        temp=sum1=sum2=ans=0;
        cin>>n;
        ll arr[n]={0};
        if((n/2)%2!=0)
            cout<<"NO\n";
        else
        {
            k=1;
            l=2;
            rep(i,n/2)
            {
                arr[i]=l;
                sum1+=arr[i];
                l+=2;
            }
            f(j,n/2,n)
            {
                if(j==n-1)
                    arr[j]=sum1-sum2;
                else
                {
                    arr[j]=k;
                    k=k+2;
                    sum2+=arr[j];
                }
            }
            cout<<"YES\n";
            rep(i,n)
            cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
