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
ll modPow(ll x,ll n,ll m)
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
ll countSetbits(ll num)
{
    ull temp=0;
    while(num){
        num=num&(num-1);
        temp++;
    }
    return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,l,i,k,temp=0,maxi=-1,pos=0;
    cin>>n>>l;
    vector<double> ar;
    double a[n];
    rep(i,n)
    cin>>a[i];
    sort(a,a+n);
    maxi=a[0];
    if(n>1)
    {
        f(i,1,n)
        ar.pb(a[i]-a[i-1]);
        maxi=*max_element(all(ar));
    }
    double tem = (double)maxi/2;
    double maxT = max(a[0],l-a[n-1]);
    double ans = max(tem,maxT);
    cout<< fixed <<setprecision(10)<<ans<<endl;
    return 0;
}
