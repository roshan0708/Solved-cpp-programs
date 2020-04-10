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
    ll t,n,m,i,j,k,l,ch,sum,sum2,temp,val;
    double x;
    cin>>t;
    while(t--)
    {
        sum=0;sum2=0;temp=0;
        cin>>n>>x;
        ll bury[n];
        rep(i,n)
        {
            cin>>bury[i];
            sum+=bury[i];
        }
        sort(bury,bury+n,greater<ll>());
        if(((double)sum/n)>=x)
        cout<<n<<"\n";
        else
        {
        	rep(i,n)
        {
            sum2+=bury[i];
            if(((double)sum2/(i+1))>=x)
            temp++;
            else
            break;
        }
        cout<<temp<<"\n";}
    }
    return 0;
}
