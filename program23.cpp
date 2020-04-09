#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s, t;
	cin >> n >> s >> t;
	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		if (s[i] == t[i]) continue;
		int pos = -1;
		for (int j = i + 1; j < n; ++j) {
			if (s[j] == t[i]) {
			        pos = j;
			        break;
			}
		}
		if (pos == -1) {
			cout << -1 << endl;
			return 0;
		}
		for (int j = pos - 1; j >= i; --j) {
			swap(s[j], s[j + 1]);
			ans.push_back(j);
		}
	}
	cout << ans.size() << endl;
	for (auto it : ans)
	cout << it + 1 << " ";
	cout << endl;
	return 0;
}
