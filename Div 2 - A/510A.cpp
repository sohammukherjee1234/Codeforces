/*input
5 3
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	string a = "", b = "";
	for (int i = 0; i < y-1; i++) {
		a += '#';
		b += '.';
	}
	a += '#';
	b += '#';
	for (int i = 1; i <= x; i++) {
		if (i % 2 == 0) {
			cout << b << endl;
			std::reverse(b.begin(), b.end());
		}
		else {
			cout << a << endl;
		}
	}
	return 0;
}