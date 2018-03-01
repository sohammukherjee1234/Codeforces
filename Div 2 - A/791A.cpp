/*input
4 9
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	ll a, b, ans = 0;
	cin >> a >> b;
	while (a <= b) { a *= 3; b *= 2; ans++; }
	cout << ans;
	return 0;
}