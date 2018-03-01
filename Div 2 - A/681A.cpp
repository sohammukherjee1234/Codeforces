/*input
3
Applejack 2400 2400
Fluttershy 2390 2431
Pinkie_Pie -2500 -2450
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, l, r;
	string s;
	bool flag = false;
	cin >> n;
	while (n--) {
		cin >> s >> l >> r;
		if (r > l && l >= 2400) {
			flag = true;
			break;
		}
	}
	cout << (flag ? "YES" : "NO");
	return 0;
}