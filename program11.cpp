#include<bits/stdc++.h>
using namespace std;
long long lis(vector<long long> &arr)
{
    long long i,j,k;
    if(arr.size()==0)
    return 0;
    vector<long long> tail(arr.size());
    fill(tail.begin(),tail.end(),0);
    long long length=1;
    tail[0]=arr[0];
    for(i=0;i<arr.size();i++)
    {
        auto b=tail.begin();
        auto e=tail.begin()+length;
        auto it= lower_bound(b,e,arr[i]);
        if(it==tail.begin()+length)
        tail[length++]=arr[i];
        else
        *it=arr[i];
    }
    return length;
}
int main()
{
    long long n,i,j,k,l;
    cin>>n;
    vector<long long>arr;
    for(i=0;i<n;i++)
    {
        cin>>l;
        arr.push_back(l);
    }
    cout<<lis(arr)<<endl;
    return 0;
}
