#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l,maxSub=1,prevSub=1;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        {
            if(arr[i]>=arr[i-1])
            {
                prevSub++;
                maxSub=max(maxSub,prevSub);
            }
            else
                prevSub=1;
        }
    }
    cout<<maxSub<<endl;
    return 0;
}
