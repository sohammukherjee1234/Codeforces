/*input
3
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
	for (int i = 0; i < n-1; i++) {
		if (i % 2 == 0) cout << "I hate that ";
		else cout << "I love that ";
	}
	if (n % 2 == 0) cout << "I love it";
	else cout << "I hate it";
	return 0;
}