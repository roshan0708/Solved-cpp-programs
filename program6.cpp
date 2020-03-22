#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ll n,i,j,evenPos=0,oddPos=0,even=0,odd=0;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even++;
            evenPos=i;
        }
        else
        {
            odd++;
            oddPos=i;
        }
    }
    if(even==1)
        cout<<evenPos+1<<endl;
    else
        cout<<oddPos+1<<endl;
    return 0;
}
