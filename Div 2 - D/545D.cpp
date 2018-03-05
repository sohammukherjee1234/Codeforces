/*input
5
15 2 1 5 3
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	ll n, arr[100010];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	ll s = 0;
	ll ans = 0;
	std::sort(arr, arr+n);
	for (int i = 0; i < n; i++) {
		if (s <= arr[i]) {
			ans++;
			s += arr[i];
		}
	}
	cout << ans;
	return 0;
}