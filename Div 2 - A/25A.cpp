/*input
5
2 4 7 8 10
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
	vector<int> a;
	vector<int> b;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (x % 2 == 0) a.pb(i);
		else b.pb(i);
	}
	if (a.size() < b.size()) cout << a[0];
	else cout << b[0];
	return 0;
}