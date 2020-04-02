#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int arr[4],i,j;
    int a[2]={0}; // 0=SEGMENT 1=TRIANGLE 2=IMPOSSIBLE
    for(i=0;i<4;i++)
        cin>>arr[i];
    sort(arr,arr+4);
    for(j=0;j<=1;j++)
    {
        if(arr[j]+arr[j+1]==arr[j+2])
            a[j]=0;
        else if(arr[j]+arr[j+1]>arr[j+2])
            a[j]=1;
        else
            a[j]=2;
    }
    if(a[0]==1 || a[1]==1)
        cout<<"TRIANGLE\n";
    else if(a[0]==0 || a[1]==0)
        cout<<"SEGMENT\n";
    else
        cout<<"IMPOSSIBLE\n";
    return 0;
}
