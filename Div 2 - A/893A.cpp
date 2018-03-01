/*input
3
1
1
2
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, x, r = 3;
	bool flag = true;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == r) {
			flag = false;
			break;
		}
		r = 6-r-x;
	}
	cout << (flag ? "YES" : "NO");
	return 0;
}