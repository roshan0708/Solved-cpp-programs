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
template <typename T>
string NumberToString(T pNumber)
{
     ostringstream oOStrStream;
     oOStrStream << pNumber;
     return oOStrStream.str();
}
ll StringToNumber(string s)
{
    stringstream geek(s);
    ll x=0;
    geek>>x;
    return x;
}
ll modPow(ll x,ll n,ll m)
{
    if(n==0)
    return 1%m;
    ull u = modPow(x,n/2,m);
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
vl primes;
void seiveForm(ll n)
{
    ll i,j;
    vector<bool> isPrime(n+1,true);
    isPrime[0]=false;
    isPrime[1]=false;
    f(i,2,n+1)
    {
        if(isPrime[i]==true)
            for(j=i*i;j<=n+1;j+=i)
                isPrime[j]=false;
    }
    rep(i,n+1)
    {
        if(isPrime[i]==true)
            primes.pb(i);
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
bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
   return (ceil(log2(n)) == floor(log2(n)));
}
ll power(ll x, ll y)
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
ll divisors(ll n)
{
    seiveForm(n);
    ll result = 1,i;
    rep(i,sz(primes))
    {
        ll p = primes[i];
        ll exp = 0;
        while(p<=n)
        {
            exp+=(n/p);
            p*=primes[i];
        }
        result*=(exp+1);
        result%=mod;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,k,x=0,ans=0;
    cin>>n;
    cout<<divisors(n)<<endl;
    return 0;
}
