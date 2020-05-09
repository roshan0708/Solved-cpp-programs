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
ll gcd(ll a,ll b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
ll seive[1000000];
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
bool isPerfectSquare(ll num)
{
    double n = sqrt(num);
    return n==(ll)n?true:false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,t,a,b,c,i,j,k,l,temp=0,ans=0;
    cin>>t;
    while(t--)
    {
        ll arr[3],d1=0,d2=0;
        rep(i,3)
        cin>>arr[i];
        sort(arr,arr+3);
        d1=abs(arr[1]-arr[0]);
        d2=abs(arr[2]-arr[1]);
        if((d1==1 && d2==1) || (d1==0 && d2==1) || (d1==1 && d2==0) || (d1==0 && d2==0))
            cout<<"0\n";
        else
        {
            if(arr[2]-arr[1]==1)
            {
                arr[2]-=1;
                arr[0]+=1;
            }
            else if(arr[2]-arr[1]==0)
            {
                arr[2]-=1;
                arr[1]-=1;
                arr[0]+=1;
            }
            else
            {
                arr[2]-=1;
                arr[1]+=1;
                arr[0]+=1;
            }
            cout<<abs(arr[0]-arr[1])+abs(arr[1]-arr[2])+abs(arr[0]-arr[2])<<"\n";
        }
    }
    return 0;
}
