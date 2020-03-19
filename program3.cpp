#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l,coins=0,total=0,sumT=0;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr,arr+n,greater<long long>());
    for(j=0;j<n;j++)
    {
        coins++;
        sumT+=arr[j];
        total-=arr[j];
        if(sumT<=total)
            continue;
        else
            break;
    }
    cout<<coins<<endl;
    return 0;
}
