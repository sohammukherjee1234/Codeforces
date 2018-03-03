/*input
3
1 10
0 10
10 10
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		ans += (int) (y-x >= 2);
	}
	cout << ans;
	return 0;
}