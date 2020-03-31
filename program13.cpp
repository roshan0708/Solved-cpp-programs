#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cin>>n;
	map<string,int> data;
	string s[n];
	string str;
	int score[n];
	for(i=0;i<n;i++)
	{
		cin>>s[i]>>score[i];
		data[s[i]]+=score[i];
	}
	int maxi=-1;
	for(i=0;i<n;i++)
	{
		maxi=max(maxi,data[s[i]]);
	}
	map<string,int> mp;
	for(i=0;i<n;i++)
	{
		mp[s[i]]+=score[i];
		if(data[s[i]]==maxi && mp[s[i]]>=maxi)
		{
			str=s[i];
			break;
		}
	}
	cout<<str<<endl;
	return 0;
}
