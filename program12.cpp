#include<bits/stdc++.h>
using namespace std;
int minRefills(int arr[],int n,int fin)
{
    int newFill=0,currFill=0,lastfill=0;
    while(currFill<n-1)
    {
        lastfill=currFill;
        while(currFill<n-1 && (arr[currFill+1]-arr[lastfill]<=fin))
        { currFill++;
        if(currFill==n-1)
            break;
         }
        if(currFill==lastfill)
            return -1;
        if(currFill<n-1)
            newFill++;
    }
    return newFill;
}
int main()
{
    int n,fin;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cin>>fin;
    int refills=minRefills(arr,n,fin);
    cout<<refills<<endl;
    return 0;
}
