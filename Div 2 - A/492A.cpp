/*input
25
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, x = 1;
	cin >> n;
	while (true) {
		if (x*(x+1)/2 > n) break;
		n -= x*(x+1)/2;
		x++;
	}
	cout << x-1;
	return 0;
}