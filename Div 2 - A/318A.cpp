/*input
7 7
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	ll k, n;
	cin >> n >> k;
	if (n % 2) n += 1;
	if (k <= n/2) {
		cout << 2*(k-1) + 1;
	}
	else {
		k -= n/2;
		cout << 2*k;
	}
	return 0;
}