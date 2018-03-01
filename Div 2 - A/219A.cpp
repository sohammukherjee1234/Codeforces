/*input
2
aazz
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int k;
	string s;
	cin >> k >> s;
	map<char, int> data;
	for (char i : s) data[i] += 1;
	bool flag = true;
	for (auto i : data) {
		if (i.second % k != 0) {
			flag = false;
			break;
		}
	}
	if (!flag) cout << -1;
	else {
		string ans = "";
		for (auto i : data) {
			for (int j = 0; j < i.second/k; j++) {
				ans += i.first;
			}
		}
		while (k--) cout << ans;
	}
	return 0;
}