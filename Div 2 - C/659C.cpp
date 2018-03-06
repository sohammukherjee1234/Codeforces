/*input
3 7
1 3 4
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	unordered_set<int> data;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		data.insert(x);
	}
	int p = 1;
	std::vector<int> ans;
	while (s >= p) {
		if (data.find(p) == data.end()) {
			ans.pb(p);
			s -= p;
		}
		p++;
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	return 0;
}