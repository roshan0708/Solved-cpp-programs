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
    ll t,a,b,c,i,temp=0,ans=0;
    cin>>t;
    while(t--)
    {
        ll up=0,down=0,right=0,left=0;
        string s;
        cin>>s;
        map<char,ll>mp;
        rep(i,s.length())
        {
            mp[s[i]]++;
        }
        if(min(mp['U'],mp['D'])==0)
        {
            if(mp['L'] &&  mp['R'])
                cout<<"2\nLR\n";
            else
                cout<<"0\n";
        }
        else if(min(mp['L'],mp['R'])==0)
        {
            if(mp['D'] &&  mp['U'])
                cout<<"2\nDU\n";
            else
                cout<<"0\n";
        }
        else
        {
            up=down=min(mp['U'],mp['D']);
            right=left=min(mp['L'],mp['R']);
            cout<<2*(right+up)<<"\n";
            rep(i,up)
            cout<<'U';
            rep(i,right)
            cout<<'R';
            rep(i,down)
            cout<<'D';
            rep(i,left)
            cout<<'L';
            cout<<"\n";
        }
    }
    return 0;
}
