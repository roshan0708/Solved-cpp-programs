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
ll modPow(ll x,ll n,ll m)   //fast modular exponentiation
{
    if(n==0)
    return 1%m;
    ll u = modPow(x,n/2,m);
    u=u*u%m;
    if(n%2==1)
    u=u*x%m;
    return u;
}
ll gcd(ll a,ll b)   //gcd
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
ll seive[1000000];  //seive formation for prime numbers
void seiveForm()
{
    ll i,j;
    seive[0]=seive[1]=1;
    f(i,2,100000)
    {
        if(seive[i]==0)
            for(j=i*i;j<1000000;j+=i)
                seive[j]=1;
    }
}
bool isPerfectSquare(ll num)    //perfect-square check
{
    double n = sqrt(num);
    return n==(ll)n?true:false;
}
ll func(ll n)
{
    if(n==0)
        return 0;
    if(n%2==0)
        return func(n/2);
    else
        return func(n/2)+1;
}
int main()
{
    ll i,j,k,n,m,l,r,t,t1,t2,temp,sum=0,maxi;
    cin>>t;
    while(t--)
    {
        vl arr;
        cin>>n;
        bool ans=true;
        l=r=temp=t1=t2=0;
        k=1;
        ll a[n],b[n];
        rep(i,n)
        cin>>a[i];
        rep(i,n)
        cin>>b[i];
        rep(i,n)
        {
            if(a[i]!=b[i])
            {
                l=i;
                break;
            }
        }
        f(i,l,n)
        {
            if(a[i]==b[i])
                break;
            else
                temp++;
        }
        r=l+temp-1;
        f(i,l,r+1)
        {
            t1=b[i]-a[i];
            arr.pb(t1);
        }
        if(sz(arr)==0)
            cout<<"YES\n";
        else{
        t1=arr[0];
        rep(i,sz(arr))
        if(arr[i]<=0 || arr[i]!=t1)
        {
            ans=false;
            break;
        }
        if(ans==false)
            cout<<"NO\n";
        else
        {
            f(i,l,r+1)
            {
                a[i]=a[i]+arr[i-l];
            }
            rep(i,n)
            {
                if(a[i]!=b[i])
                {
                    ans=false;
                    break;
                }
            }
            if(ans==false)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        }
    }
    return 0;
}
