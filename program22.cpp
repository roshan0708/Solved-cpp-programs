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
	ll n,m,i,j,k,l,low,high,si=0;
	cin>>n>>m;
	vl ans;
	f(i,1,m+1)
	ans.pb(i);
	while(n--)
	{
		cin>>low>>high;
		rep(i,high+1)
		{
			if(low==high && ans[i]==low)
			ans[i]=0;
			else if(ans[i]>=low && ans[i]<=high)
			ans[i]=0;
			else
			continue;
		}
	}
	rep(i,m)
	if(ans[i]!=0)
	si++;
	cout<<si<<"\n";
	rep(i,m)
	if(ans[i]!=0)
	cout<<ans[i]<<" ";
	cout<<endl;
    return 0;
}
