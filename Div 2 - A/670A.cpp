/*input
14
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
	int ans = 2*(n/7), m = n%7;
	int x = 0, y = 0;
	if (m == 1) { x = 0; y = 1; }
	if (m == 2) { x = 0; y = 2; }
	if (m == 3) { x = 0; y = 2; }
	if (m == 4) { x = 0; y = 2; }
	if (m == 5) { x = 0; y = 2; }
	if (m == 6) { x = 1; y = 2; }
	cout << ans+x << " " << ans+y;
	return 0;
}