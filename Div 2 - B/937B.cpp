/*input
3 6
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int factor(int n) {
	int x = 1;
	if (n % 2 == 0) return 2;
	for (int i = 3; i*i <= n; i += 2) {
		if (n % i == 0)
			return i;
	}
	if (n > 1) x = n;
	return x;
}

int main() {
	int p, y;
	cin >> p >> y;
	int ans = y;
	while (ans > p) {
		if (factor(ans) > p) break;
		ans--;
	}
	if (ans <= p) cout << -1;
	else cout << ans;
	return 0;
}