/*input
700000001
27
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

bool prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int find_prime(int n) {
	int ans = n;
	while (!prime(ans)) ans--;
	return ans;
}

void parts(int n) {
	for (int i = 1; i <= n; i++) {
		if (prime(i) && prime(n-i)) {
			cout << i << " " << n-i;
			break;
		}
	}
}

void solve(int n) {
	int p = find_prime(n);
	if (p == n) { cout << 1 << endl << p; }
	else if (p == n-2) { cout << 2 << endl << 2 << " " << p; }
	else {
		cout << 3 << endl << p << " ";
		parts(n-p);
	}
}

int main() {
	int n;
	cin >> n;
	solve(n);
	return 0;
}