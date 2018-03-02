/*input
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	ll n, k;
	cin >> n >> k;
	ll ans = 1;
	for (int i = 1; i <= 50; i++) {
		ll x = (ll) pow(2, i-1);
		ll y = x*2;
		if (k % y == x) {
			ans = i;
			break;
		}
	}
	cout << ans;
	return 0;
}