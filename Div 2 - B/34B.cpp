/*input
5 3
-6 0 35 -2 4
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, m;
	vector<int> data;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x < 0) data.pb(-x);
	}
	std::sort(data.begin(), data.end(), std::greater<int>());
	int ans = 0;
	for (int i : data) {
		if (m == 0) break;
		ans += i;
		m--;
	}
	cout << ans;
	return 0;
}