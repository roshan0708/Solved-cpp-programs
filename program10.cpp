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
    ll n,i,cars=0,acc;
    cin>>n;
    ll freq[5]={0};
    rep(i,n)
    {
    	cin>>acc;
    	freq[acc]++;
    }
    cars+=freq[4];
    cars+=freq[3];
    freq[1]-=freq[3];
    if(freq[1]<0)
    freq[1]=0;
    cars+=(freq[2]/2)+(freq[2]%2);
    freq[2]=freq[2]%2;
    freq[1]-=2*(freq[2]);
    if(freq[1]>0)
    {
    	cars+=freq[1]/4;
    	if(freq[1]%4>0)
    	cars++;
    }
    cout<<cars<<endl;
    return 0;
}
