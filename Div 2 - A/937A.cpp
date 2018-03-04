/*input
4
1 3 3 2
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> ans;
	while (n--) {
		int x;
		cin >> x;
		if (x > 0) ans.insert(x);
	}
	cout << ans.size();
	return 0;
}