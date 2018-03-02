/*input
nzwel
niwel
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	string x, y;
	cin >> x >> y;
	bool flag = true;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] < y[i]) {
			flag = false;
			break;
		}
	}
	cout << (flag ? y : "-1");
	return 0;
}