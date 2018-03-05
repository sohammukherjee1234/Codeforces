/*input
3 2
1 3
2 3
4 4
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int dp[100010];
int mod = 1000000007;

void pre(int k) {
	int arr[100010];
	for (int i = 0; i < k; i++)
		arr[i] = 1;
	for (int i = k; i <= 100000; i++)
		arr[i] = (arr[i-1] + arr[i-k]) % mod;
	dp[0] = 0;
	for (int i = 1; i <= 100000; i++)
		dp[i] = (arr[i] + dp[i-1]) % mod;
}

int solve(int a, int b) {
	int ans = dp[b] - dp[a-1];
	if (ans < 0) ans += mod;
	return ans;
}

int main() {
	int t, k;
	cin >> t >> k;
	pre(k);
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}
	return 0;
}